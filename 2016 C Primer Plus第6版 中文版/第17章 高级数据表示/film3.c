/* films3.c ---使用ADT风格的链表*/
/* 与list.c一起编译*/
#include <stdio.h>
#include <stdlib.h>  //提供exit()原型
#include "list.h" //定义List、Item
void showmovies(Item item);
char * s_gets(char * st, int n);

/* 主函数*/
int main(void)
{
//变量声明
	List movies;
	Item temp;
//初始化
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available! Bye!\n");
		eixt(1);
	}
// 获取用户输入并储存
	puts("Enter the first movie tilte:");
	while (s_gets(temp.title,TSIZE)!=NULL && temp.title[0]!='\0')
	{
		puts("Enter your rating <0-10>:");
		scanf("%d",&temp.rating);
		while(getchar()!='\n')
			continue;
		if (AddItem(temp,&movies)==false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("The list is now full.");
			break;
		}
		puts("Enter next  movie tilte (empty line to stop):");
	}
//显示
	if (ListIsEmpty(&movies))
		printf("No data entered.\n");
	else
	{
		printf("Here is the movie list:\n");
		Traverse(&movies, showmovies)
	}
	printf("You entered %d movies.\n", ListItemCount(&movies));	
//清理
	EmptyList(&movies)；
	printf("Bye!\n");

	return 0;
}

/* 函数定义*/
void showmovies(Item item)
{
	printf("Movie: %s Rating: %d\n", item.title, item.rating);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st,n,stdin);
	if (ret_val)
	{
		find = strchr(st, '\n'); //查找换行符
		if (find) //如果地址不是NULL，
			*find = '\0'; // 在此处放置一个空字符
		else
			while (getchar()!='\n')
				continue;
	}
	return = ret_val;
}