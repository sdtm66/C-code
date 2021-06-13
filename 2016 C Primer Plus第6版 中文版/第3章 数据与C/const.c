#include <stdio.h>
#define MAX 30
enum Sex
{
    male,
    female
};

int main()
{
    const int max = 20;
    enum Sex sex = male;
    printf("%d,%d,%d\n", MAX, max, male);
    return 0;
}