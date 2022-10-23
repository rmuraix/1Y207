#include <stdio.h>
int main(void)
{
    int a=10;
    printf("a=%d    | %x\n",a,a);
    a+=10;
    printf("a=%d    | %x\n",a,a);
    a+=10;
    printf("a=%d    | %x\n",a,a);
    int b=0x3f;
    printf("b=%d	| %x\n",b,b);

    return 0;
}
