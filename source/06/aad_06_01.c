#include <stdio.h>
#define MAX 5

int main(void)
{
    printf("//--------------------\n"); // delimiter
    // short int
    short int b[MAX];

    for (int i = 0; i < MAX; i++)
    {
        b[i] = 100 + i;
        printf("%d\t%x\n", b[i], &b[i]);
    }
    printf("//--------------------\n"); // delimiter
    // long int
    long int c[MAX];
    for (int i = 0; i < MAX; i++)
    {
        c[i] = 100 + i;
        printf("%d\t%x\n", c[i], &c[i]);
    }
    return 0;
}
