#include <stdio.h>
int main(void)
{
    int a = 456;
    int *p;
    p = &a;
    printf("%d\n", *p);
    return 0;
}