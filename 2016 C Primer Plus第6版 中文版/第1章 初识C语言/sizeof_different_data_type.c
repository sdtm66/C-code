/* sizeof_different_data_type.c --显示不同数据类型所占字节的大小 */

#include <stdio.h>

 int main()
{
 printf("sizeof char is %d bytes\n",sizeof(char) );
 printf("sizeof short is %d bytes\n",sizeof(short) );
 printf("sizeof int is %d bytes\n",sizeof(int) );
 printf("sizeof long is %d bytes\n",sizeof(long) );
 printf("sizeof long long is %d bytes\n",sizeof(long long) );
 printf("sizeof float is %d bytes\n",sizeof(float) );
 printf("sizeof double is %d bytes\n",sizeof(double) );

 return 0;
}

/****************************
*sizeof char is 1 bytes
*sizeof short is 2 bytes
*sizeof int is 4 bytes
*sizeof long is 4 bytes
*sizeof long long is 8 bytes
*sizeof float is 4 bytes
*sizeof double is 8 bytes
****************************/