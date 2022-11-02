// !!Not a safe code!!
// Find the maximum number that can be handled by intentionally overflowing
#include <stdio.h>
#define MAX 40

int main(void)
{
    int a = 1;
    for (int i = 0; i < MAX; i++)
    {
        a *= 2;
        printf("%d %d\n", i, a);
    }
    printf("//--------------------\n"); // delimiter
    unsigned int b = 1;
    for (int i = 0; i < MAX; i++)
    {
        b *= 2;
        printf("%d %d\n", i, b);
    }
    printf("//--------------------\n"); // delimiter
    short int c = 1;
    for (int i = 0; i < MAX; i++)
    {
        c *= 2;
        printf("%d %d\n", i, c);
    }
    printf("//--------------------\n"); // delimiter
    long int d = 1;
    for (int i = 0; i < MAX; i++)
    {
        d *= 2;
        printf("%d %d\n", i, d);
    }
    return 0;
}