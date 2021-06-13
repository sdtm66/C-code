/* getchar_buffer.c -- 展示getchar的用法 
gcc getchar_buffer.c  //加上-fexec-charset=gbk解决gcc编译器中文乱码问题
 */

#include <stdio.h>
int main()
{
	char password[20] = {0};
	int ret = 0;

	printf("please enter the password\n");
	scanf("%s",password);
	while((ret=getchar())!='\n')
	{
	;
	}

	printf("please confirm Y/N\n");
	ret = getchar();

	if (ret == 'Y')
	{
	printf("confirm successfully, your password is %s",password);
	}
	else
	{
	printf("Fail to confirm");	
	}

 	return 0;
}