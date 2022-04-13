#define _CRT_SECURE_NO_WARNINGS
//做题
//#include  <stdlib.h>
//#include  <stdio.h>
//#define   N   10
//double fun(double  x[], double* av)
//{
//	int  i, j;    double  d, s;
//	s = 0;
//	for (i = 0; i < N; i++)  s = s + x[i];
//	/**********found**********/
//	*av = s / N;
//	d = 32767;
//	for (i = 0; i < N; i++)
//		if (x[i] < *av && *av - x[i] <= d) {
//			/**********found**********/
//			d = *av - x[i];
//			j = i;
//		}
//	/**********found**********/
//	return  x[j];
//}
//void main()
//{
//	int  i;    double  x[N], av, m;
//	for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
//	printf("\n");
//	m = fun(x, &av);
//	printf("\nThe average is: %f\n", av);
//	printf("m=%5.1f ", m);
//	printf("\n");
//}


#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
/*************found**************/
float fun(int n)
{
	float A = 1; int i;
	/*************found**************/
	for (i = 2; i <= n; i++)
		A = 1.0 / (1 + A);
	return A;
}
void main()
{
	int n;
	system("CLS");
	printf("\nPlease enter n: ");
	scanf("%d", &n);
	printf("A%d=%lf\n", n, fun(n));
}

//对于二维数组，将右上半部分乘以m,
//右半部分，行小于等于列
//左半部分，行大于等于列
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  N  5
void fun(int a[][N], int m)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            if (i <= j)
            {
                a[i][j] *= m;
            }
    }

}

//第二种算法，先将列遍历，再遍历行小于等于列的
//int i, j;
//for (j = 0; j < N; j++)
//{
//    for (i = 0; i <= j; i++)
//    {
//        a[i][j] *= m;
//    }
//}
void main()
{
    int a[N][N], m, i, j;
    FILE* out;
    printf("*****The array*****\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = rand() % 20;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    m = rand() % 4;
    printf("m=%4d\n", m);
    fun(a, m);
    printf("THE RESULT\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    /******************************/
    out = fopen("out.dat", "w");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            a[i][j] = i * j;
    fun(a, 8);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            fprintf(out, "%4d", a[i][j]);
        fprintf(out, "\n");
    }
    fclose(out);
    /******************************/
}
