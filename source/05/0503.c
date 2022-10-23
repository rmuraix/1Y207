#include<stdio.h>

int main(void)
{
    char str[11] = {"abcdefghij"};
    char temp;

    // print the original string
    for(int i = 0; i < 10; i++)
    {
        printf("%c ", str[i]);
    }
    
    printf("\nReverse\n");

    // reverse the string
    for (int i = 0; i < 5; i++)
    {
        temp = str[i];
        str[i] = str[9 - i];
        str[9 - i] = temp;
    }
    // print the reversed string
    for(int i = 0; i < 10; i++)
    {
        printf("%c ", str[i]);
    }

    return 0;
}
