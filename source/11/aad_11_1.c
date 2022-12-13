#include <stdio.h>
#include <stdlib.h>

double gettemp(double high);

int main(void)
{
    char c[10];

    double high = atof(fgets(c, 10, stdin));

    double temp = gettemp(high);

    printf("高度%fkmにおける気温は%f℃です。", high, temp);

    return 0;
}

double gettemp(double high)
{
    double temp = 15 - 6.5 * high;
    return temp;
}