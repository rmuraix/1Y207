#include <stdio.h>
#include <stdlib.h>

void getmax(int input[], int *maxTime, int *maxNum);

int main(void)
{
    // 　入力文字を受け取る
    char c[10];
    // intに変換した入力
    int input[11] = {0};

    // 10回入力を受け付け
    for (int i = 0; i < 10; i++)
    {
        input[i] = atoi(fgets(c, 10, stdin));
    }
    // 入力された整数を表示
    printf("--入力された値--\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d回目入力:%d\n", i + 1, input[i]);
    }
    
    printf("\n");

    int time = 0;
    int number = 0;

    getmax(input, &time, &number);

    printf("%d回目に入力された値が最大値で%dです。", time, number);

    return 0;
}

void getmax(int input[], int *time, int *number)
{
    int max = input[0];
    for (int i = 1; i <= 10; i++)
    {
        // 現時点での最大と比較する
        if (input[i] > max)
        {
            *time = i + 1;
            *number = input[i];
            max = input[i];
        }
    }
}
