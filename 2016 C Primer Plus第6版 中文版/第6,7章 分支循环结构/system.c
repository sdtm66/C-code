/* system.c -- 执行系统命令 
system.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("do you want to shut down your computer?[Y/N]");
	scanf("%c",&ch);
	if (ch == 'Y')
	{
	system("shutdown -s -t 60");
	}
	return 0;
}