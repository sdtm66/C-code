#include <stdio.h>
#include <string.h> //提供strlen函数的原�?

int main()
{
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c', 0};

    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));

    return 0;
}