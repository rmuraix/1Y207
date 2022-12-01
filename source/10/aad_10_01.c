#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	fp = fopen("File1.txt", "r");
	char c[3];				// fgetsで取得した値を格納する変数
	int tmp;				// fgetsで取得して整数にした値を格納する一時変数。度数の合計を求める際の一時変数。
	int num[11] = {0};		// 0から9番目要素：各値の度数カウント用。10番目要素：合計値格納用
	double rf[10] = {0.0};	//相対度数
	double crf[10] = {0.0}; //累積相対度数
	int i;

	//ファイル読み込み、また出現をカウントする
	while (fgets(c, 3, fp) != NULL)
	{
		tmp = atoi(c);
		num[tmp]++;
	}

	//度数の合計を求める
	tmp = 0; //変数tmpは再利用する
	for (i = 0; i < 10; i++)
	{
		tmp += num[i];
	}
	num[10] = tmp;

	//相対度数を求める
	for (i = 0; i < 10; i++)
	{
		rf[i] = (double)num[i] / num[10];
	}

	//累積相対度数を求める
	crf[0] = rf[0];
	for (i = 1; i < 10; i++)
	{
		crf[i] = crf[i - 1] + rf[i];
	}

	//度数分布を出力する
	printf("値\t度数\t相対度数\t累積相対度数\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d \t%d \t%lf \t%lf\n", i, num[i], rf[i], crf[i]);
	}
	printf("---------------------------------------------------\n");
	printf("度数の合計:%d\n", num[10]);

	fclose(fp);
	return (0);
}