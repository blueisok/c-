#define _CRT_SECURE_NO_WARNINGS
////计算二维数组对角和
//#include <stdio.h>
//void fun()
//{
//    int a[3][3], sum;
//    int i, j;
//    /*************found**************/
//    sum = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//            /*************found**************/
//            scanf("%d", &a[i][j]);//对每个数组取地址
//    }
//    for (i = 0; i < 3; i++)
//        sum = sum + a[i][i];
//    printf("Sum=%d\n", sum);
//}
//void main()
//{
//    fun();
//}


//对矩阵的转置（行列互换）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//void fun(int array[3][3])
//{
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = i + 1; j < 3; j++)//对主对角线上半部分的遍历
//        {
//            int tmp = array[i][j];
//            array[i][j] = array[j][i];
//            array[j][i] = tmp;
//        }
//    }
//}
//void main()
//{
//    FILE* wf;
//    int i, j;
//    int array[3][3] = { {100,200,300},{400,500,600},{700,800,900} };
//    system("CLS");
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//            printf("%7d ", array[i][j]);
//        printf("\n ");
//    }
//    fun(array);
//    printf("Converted array:\n ");
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//            printf("%7d ", array[i][j]);
//        printf("\n ");
//    }
//    /******************************/
//    //  wf=fopen("out.dat","w");
//    //  for (i=0;i<3;i++)
//    //     { for (j=0;j<3;j++)
//    //          fprintf(wf,"%7d ",array[i][j]);
//    //       fprintf(wf,"\n");
//    //     }   
//    //  fclose(wf);
//    ///*****************************/
//}
//
//
////传地址
//#include <stdio.h>
///*************found**************/
//void fun(int* x, int* y)
//{
//    int t;
//    /*************found**************/
//    t = *x; *x = *y; *y = t;
//}
//void main()
//{
//    int a, b;
//    a = 8;
//    b = 3;
//    fun(&a, &b);
//    printf("%d  %d\n ", a, b);
//}

//求小于等于lim的素数，并把素数放在aa数组中
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
    int i, j, count = 0;
    for (i = 2; i <= lim; i++)//素数大于1
    {
        for (j = 2; j < i; j++)//对2到i-1的数分别取余
        {
            if (i % j == 0)//不是素数
            {
                break;
            }
        }
        if (j >= i)
        {
            aa[count++] = i;
        }
    }
    return count;
}
void main()
{
   // FILE* wf;
    int limit, i, sum;
    int aa[MAX];
    system("CLS");
    printf("输入lim大小:");
    scanf("%d", &limit);
    sum = fun(limit, aa);
    for (i = 0; i < sum; i++)
    {
        if (i % 10 == 0 && i != 0)    
            printf("\n ");
        printf("%5d ", aa[i]);
    }
    /******************************/
    //wf = fopen("out.dat", "w");
    //sum = fun(15, aa);
    //for (i = 0; i < sum; i++)
    //{
    //    if (i % 10 == 0 && i != 0)   
    //        fprintf(wf, "\n");
    //    fprintf(wf, "%5d ", aa[i]);
    //}
    //fclose(wf);
    ///*****************************/
}
