#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//double fun(int  n)
//{
//    int  i, k;    double  s, t;
//    s = 0;
//    /**********found**********/
//    k = 1;
//    for (i = 1; i <= n; i++) {
//        /**********found**********/
//        t = 2*i;
//        s = s + k * (2 * i - 1) * (2 * i + 1) / (t * t);
//        /**********found**********/
//        k = k * (-1);
//    }
//    return  s;
//}
//void main()
//{
//    int  n = -1;
//    while (n < 0)
//    {
//        printf("Please input(n>0): ");  scanf("%d", &n);
//    }
//    printf("\nThe result is: %f\n", fun(n));
//}


#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void fun(int a[], int n, int* max, int* d)
{
    int i;
    *max = a[0];
    for (i = 1; i < n; i++)
    {
        if (*max < a[i])
        {
            *max = a[i];
            *d = i;
        }
    }
}
void main()
{
    //FILE* wf;
    int i, x[20], max, index, n = 10;
    int y[20] = { 4,2,6,8,11,5 };
    srand((unsigned)time(NULL));
    for (i = 0; i < n; i++)
    {
        x[i] = rand() % 50;
        printf("%4d", x[i]);
    }
    printf("\n");
    fun(x, n, &max, &index);
    printf("Max=%5d,Index=%4d\n", max, index);

}

