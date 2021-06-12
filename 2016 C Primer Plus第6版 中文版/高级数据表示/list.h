/* list.h ---简单链表类型的头文件*/

#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

/* 特定程序的声明*/
#define TSIZE 45  /* 储存片名的数组大小*/
struct film
{
	char title[TSIZE];
	int rating;
};

/* 一般类型定义*/
typedef struct film Item;
typedef struct node
{
	Item item;
	struct node * next;
} Node;
typedef Node * List;		//List类型是指向Node的指针

/* 函数原型*/
//plist是指向List的指针，里面存放着List的地址，而List是指向Node的指针，里面存放着Node的地址
void InitializeList(List * plist); 	//初始化一个链表
bool ListIsEmpty(const List * plist); 	//确定链表是否为空定义
bool ListIsFull(const List * plist); 	//确定链表是否已满
unsigned int ListItemCount(const List * plist);	//确定链表中的项数
bool AddItem(Item item, List * plist);	//在链表末尾添加项
void Traverse(const List * plist, void(*pfun)(Item item)); 	//把函数作用于链表中的每一项
void EmptyList(List * plist);	//释放链表内存