#define _CRT_SECURE_NO_WARNINGS
#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
double fun(double* x)
{
    int  i, j;    double  s, av, y[N];
    s = 0;
    for (i = 0; i < N; i++)  s = s + x[i];
    /**********found**********/
    av = s / N;
    for (i = j = 0; i < N; i++)
        if (x[i] > av) {
            /**********found**********/
            y[j++] = x[i];
            x[i] = -1;
        }
    for (i = 0; i < N; i++)
        /**********found**********/
        if (x[i] != -1) y[j++] = x[i];
    for (i = 0; i < N; i++)x[i] = y[i];
    return  av;
}
void main()
{
    int  i;     double  x[N];
    for (i = 0; i < N; i++) { x[i] = rand() % 50; printf("%4.0f ", x[i]); }
    printf("\n");
    printf("\nThe average is: %f\n", fun(x));
    printf("\nThe result :\n", fun(x));
    for (i = 0; i < N; i++)  printf("%5.0f ", x[i]);
    printf("\n");
}


//对二维数组周边元素（四边元素求平均值）
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  N  5
double fun(int w[][N])
{
    int i, j;
    int k = 0;
    double sum = 0.0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || j == 0 || i == N - 1 || j == N - 1)
            {
                sum = sum + w[i][j];
                k++;
            }
        }
    }
    return sum / k;
}
void main()
{
    FILE* wf;
    int a[N][N] = { 0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1 };
    int i, j;
    double s;
    system("CLS");
    printf("*****The array*****\n ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n ");
    }
    s = fun(a);
    printf("*****THE RESULT*****\n ");
    printf("The sum is : %lf\n ", s);
    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%lf", s);
    fclose(wf);
    /*****************************/
}
