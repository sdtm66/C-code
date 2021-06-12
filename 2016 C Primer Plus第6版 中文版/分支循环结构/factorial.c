/* factorial.c -- 计算阶乘
gcc factorial.c
 */

#include <stdio.h>

//声明及定义阶乘函数
int factorial(int x)
{
	int i =x;
	int res =1;
	for (i=x; i>0; i--)
	{
		res*=i;
	}
	return  res;
}
//主函数
int main()
{
	int a,res,status;
	printf("please enter an intergral which is greater than -1, [enter -1 to quit]:\n");
	//scanf()函数返回成功读入的变量的个数。如果它没有读取任何项目(输入非法字符，
	//例如：希望得到数字，而用户却输入的是字符)，scanf()返回值为0
	for (status=scanf("%d",&a);a!=-1;status=scanf("%d",&a))
	{
		if (status==1 && a>=0)
		{
			res = factorial(a);
			printf("the factorial of %d is %d\n\n",a,res);
			printf("please enter an intergral which is greater than -1, [enter -1 to quit]:\n");
			continue;
		}

		if (status!=1 && a>=0)
		{
			printf("your input is not an integral, please enter once again:\n");	
		}
		else if (a<0)
		{
			printf("your input is less than 0 , please enter once again:\n");
		}	
		fflush(stdin);//清除输入缓冲区的错误数据
	}

	return 0;
}