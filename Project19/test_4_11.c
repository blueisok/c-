#define _CRT_SECURE_NO_WARNINGS
//求平均值并返回大于平均值的数
#include <stdlib.h>
#include <stdio.h>
#define   N   10
double fun(double  x[], double* y)
{
	int  i, j;    double  av;
	/**********found**********/
	av = 0.0;
	/**********found**********/
	for (i = 0; i < N; i++)
		av = av + x[i] / N;
	for (i = j = 0; i < N; i++)
		/**********found**********/
		if (x[i] > av)  y[j++] = x[i];
	y[j] = -1;
	return  av;
}
void main()
{
	int  i;    double  x[N], y[N];
	for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
	printf("\n");
	printf("\nThe average is: %f\n", fun(x, y));
	for (i = 0; y[i] >= 0; i++)  printf("%5.1f ", y[i]);
	printf("\n");
}
