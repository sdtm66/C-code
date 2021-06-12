/* const--常量定义
（1）字面常量
（2）const修饰的常变量
（3）#define定义的标识符常量
（4）枚举常量
 */

#include <stdio.h>
#define MAX 30
enum Sex {male, female};

 int main()
{
 const int max = 20;
 enum Sex sex = male;
 printf("%d,%d,%d\n",MAX,max,male);
 return 0;
}