// reads the numbers described in File1.txt, multiplies them by 2, and outputs the result.

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char a[10];
    int calc;

    // Load file(read only)
    fp = fopen("./File1.txt", "r");

    fgets(a, 10, fp);
    calc = atoi(a) * 2;

    printf("%d", calc);

    // close file
    fclose(fp);

    return 0;
}
