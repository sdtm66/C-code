/* switch.c -- 展示switch的用法 
gcc -fexec-charset=gbk switch.c  //加上-fexec-charset=gbk解决gcc编译器中文乱码问题
 */

#include <stdio.h>
int main()
{
	int day = 0;
	printf("请输入今天是星期几，请使用整数输入\n");
	scanf("%d",&day);
	switch(day)
		{
		 case 1:
 		 case 2:
  		 case 3:
  		 case 4:
 		 case 5:
        		           printf("今天是工作日");
		           break;
 		 case 6:
 		 case 7:
      		           printf("今天是休息日");
		           break;
		 default: //如果输入的整数在case选项中没有，则自动跳到default，default位置可以任意
        		           printf("输入错误，请重新运行程序");
		           break;
 		}
 	return 0;
}