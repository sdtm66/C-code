/* list.c ---支持链表操作的函数*/

#include <stdio.h>
#include <stdlib.h>  //提供exit()原型
#include "list.h" //定义List、Item
static void CopyToNode(Item item, Node * pnode);

/*接口函数*/

//初始化一个链表
void InitializeList(List * plist); 	
{
	*plist = NULL;
} 

//确定链表是否为空定义
bool ListIsEmpty(const List * plist)
{
	if (*plist = NULL)
		return true;
	else
		return false;
}

//确定链表是否已满
bool ListIsFull(const List * plist)	
{
	Node * pt;
	bool full;
	pt = (Node *)malloc(sizeof(Node));
	if (pt==NULL)
		full=true;
	else
		full=false;
	free(pt);
	return full;
}

//返回节点的数量
unsigned int ListItemCount(const List * plist)	
{
	unsigned int  count = 0;
	Node * pnode = *plist; 	//设置链表的开始
	while (pnode!=NULL)
	{
		++count;
		pnode=pnode->next;	//设置下一个节点
	}
	return count;
}

//在链表末尾添加项
bool AddItem(Item item, List * plist)
{
	Node * pnew;
	Node * scan =*plist;
	pnew=(Node *)malloc(sizeof(Node));
	if  (pnew==NULL)
		rerurn false;
	CopyToNode(item, pnew);
	pnew->next = NULL;

	if (scan == NULL)	//空链表
		*plist =pnew;	//pnew放在链表的开头
	else
	{
		while (scan->next!=NULL)
			scan = scan->next;	//找到链表的末尾
		scan->next = pnew;  	//pnew添加到链表的末尾
	}
	return true;
}

//把函数作用于链表中的每一项
void Traverse(const List * plist, void(*pfun)(Item item))	
{
	Node * pnode =*plist;	//设置链表的开始
	while (pnode!=NULL)
	{
		(*pfun)(pnode.item);		//把函数应用于链表中的项
		pnode = pnode->next;	//前进到下一项
	}

}

//释放由malloc()分配的链表内存
void EmptyList(List * plist)
{
	Node * psave
	while (*plist!=NULL)
	{
		psave=(*plist)->next		//保存下一个节点的地址
		free(*plist);	//释放当前接节点
		*plist=psave;	//前进至下一个节点
	}
}


/*局部函数定义*/
//把一个项拷贝到节点中
static void CopyToNode(Item item, Node * pnode)
{
	pnode->item = item;
}
