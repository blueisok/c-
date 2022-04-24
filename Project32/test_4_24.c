#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//#define   M   3
//#define   N   4
//void fun(int(*a)[N])
//{
//    int  i = 0, j, find = 0, rmax, c, k;
//    while ((i < M) && (!find))
//    {
//        rmax = a[i][0];  c = 0;
//        for (j = 1; j < N; j++)
//            if (rmax < a[i][j]) {
//                /**********found**********/
//                rmax = a[i][j]; c = j;
//            }
//        find = 1; k = 0;
//        while (k < M && find) {
//            /**********found**********/
//            if (k != i && a[k][c] <= rmax)  find = 0;
//            k++;
//        }
//        if (find) printf("find: a[%d][%d]=%d\n", i, c, a[i][c]);
//        /**********found**********/
//        i++;
//    }
//    if (!find) printf("not found!\n");
//}
//void main()
//{
//    int  x[M][N], i, j;
//    printf("Enter number for array:\n");
//    for (i = 0; i < M; i++)
//        for (j = 0; j < N; j++) scanf("%d", &x[i][j]);
//    printf("The array:\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++) printf("%3d", x[i][j]);
//        printf("\n\n");
//    }
//    fun(x);
//}


#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(int score[], int m, int below[])
{
    int i, aver, sum = 0;
    int k = 0;
    for (i = 0; i < m; i++)
    {
        sum += score[i];
    }
    aver = sum / m;
    for (i = 0; i < m; i++)
    {
        if (score[i] < aver)
        {
            below[k++] = score[i];
        }
    }
    return k;
}
void main()
{
   // FILE* wf;
    int i, n, below[9];
    int score[9] = { 10,20,30,40,50,60,70,80,90 };
    system("CLS");
    n = fun(score, 9, below);
    printf("\nBelow the average score are: ");
    for (i = 0; i < n; i++)
        printf("%d ", below[i]);
    /******************************/
  /*  wf = fopen("out.dat", "w");
    for (i = 0; i < n; i++)
        fprintf(wf, "%d ", below[i]);
    fclose(wf);*/
    /*****************************/
}
