#include <stdio.h>

int main(void)
{
    int a=789;
    printf("(1)-------------\n"); //単なる区切りなので、　--- の数は適当で良い
    printf("%d\n",a);
    printf("%x\n",&a);
    // printf("%d\n",*a);
    int *b;
    b=&a;
    printf("(2)-------------\n");
    printf("%d\n",*b);
    printf("%x\n",b);

    a=a+3000;
    printf("(3)-------------\n");
    printf("%d\n",*b);
    printf("%x\n",b);

    *b=*b+50000;
    printf("(4)-------------\n");
    printf("%d\n",a);
    printf("%x\n",&a);
    return 0;
}
