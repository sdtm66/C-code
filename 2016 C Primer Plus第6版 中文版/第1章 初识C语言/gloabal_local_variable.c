/* gloabal_local_variable.c --显示局部变量和全局变量的不同 */

#include <stdio.h>

int a = 100;

 int main()
{
 int a = 10;
 printf("%d",a);
 return 0;
}

// 10
// 当局部变量和全局变量的名字相同的时候，局部变量优先
//使用范围：局部变量仅限于{}内局部使用，全局变量的作用域是整个工程