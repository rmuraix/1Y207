#include <stdio.h>
int main(void)
{
    int a = 555;
    int *p;
    p = &a;
    printf("%d\n", *p); //この行は変更しないこと
    return 0;
}