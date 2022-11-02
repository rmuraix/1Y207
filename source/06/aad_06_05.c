#include <stdio.h>
int main(void)
{
    int a = 123;
    int *p;
    p = &a;
    // printf("%d\n",p); //(A)
    // printf("%d\n",&p); //(B)
    printf("%d\n", *p); //<------The answer is (C)
    return 0;
}