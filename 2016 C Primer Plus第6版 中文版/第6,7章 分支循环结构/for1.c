/* for1.c -- 展示for循环的特殊用法 
gcc for1.c
 */

#include <stdio.h>
int main()
{
int x, y;	

for (x=0,y=0; x<2&&y<5;x++,y++)
{
printf("x is %d,y is %d\n", x, y);
}

return 0;
}