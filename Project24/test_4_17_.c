#define _CRT_SECURE_NO_WARNINGS
//1 1 1 1 1
//1 2 2 2 1
//1 2 3 2 1
//1 2 2 2 1
//1 1 1 1 1
//生成n*n的矩阵，每向内一层加一
#include  <stdio.h>
#define   N   7
/**********found**********/
void fun(int(*a)[N])
{
    int  i, j, k, m;
    if (N % 2 == 0) m = N / 2;//m为层数
    else       m = N / 2 + 1;
    for (i = 0; i < m; i++) {
        /**********found**********/
        for (j = i; j < N - i; j++)//对 第一层和n-1层赋值
            a[i][j] = a[N - i - 1][j] = i + 1;
        for (k = i + 1; k < N - i; k++)//对第一列和n-1列赋值
            /**********found**********/
            a[k][i] = a[k][N - i - 1] = i + 1;
    }
}
void main()
{
    int  x[N][N] = { 0 }, i, j;
    fun(x);
    printf("\nThe result is:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)  printf("%3d", x[i][j]);
        printf("\n");
    }
}

//将十进制的m转化为k进制
#include <stdio.h>
#include <conio.h>
/*************found**************/
void fun(int m, int k)
{
    int aa[20], i;
    for (i = 0; m; i++)
    {
        /*************found**************/
        aa[i] = m % k;
        m /= k;
    }
    for (; i; i--)
        /*************found**************/
        printf("%d", aa[i - 1]);
}
void main()
{
    int b, n;
    printf("\nPlease enter a number and a base:\n");
    scanf("%d%d", &n, &b);
    fun(n, b);
    printf("\n ");
}
