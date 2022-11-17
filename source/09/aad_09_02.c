// reads the numbers written line by line in File1.txt,
// calculates and displays the average Create a program that reads the numbers written on a line in File1.txt,
// calculates the average, and displays it.

// !!Does not take into account that the file does not exist or that the contents of the file are incorrect.!!

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char a[256];
    int row;
    double sum, ave;

    // If file not exist return NULL.
    // Note that this will return NULL if you do not have read permission.
    fp = fopen("./File1.txt", "r");
    if (fp == NULL)
    {
        printf("File not exist");
        return 1;
    }

    sum = 0;
    row = 0;
    // fgets() returns NULL at end of file.
    // TODO add error handling if fail converte to int
    while (fgets(a, 256, fp) != NULL)
    {
        sum += atoi(a);
        row++;
    }

    ave = sum / row;

    printf("Average = %f", ave);

    fclose(fp);

    return 0;
}
