/* getchar.c -- 展示getchar的用法 
gcc getchar.c  //加上-fexec-charset=gbk解决gcc编译器中文乱码问题
 */

#include <stdio.h>
int main()
{
	int ch = 0;
	printf("please enter an char\n");
	while((ch=getchar()) != EOF)
	{
	 putchar(ch);
	}
 	return 0;
}