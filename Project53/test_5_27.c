#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
//#include<stdlib.h>
//#define N 10
//typedef struct ss
//{
//    char num[10];
//    int s;
//} STU;
//void fun(STU a[], STU* s)
//{
//    *s = a[0];
//    int i;
//    for (i = 0; i < N; i++)
//        if (a[i].s < s->s)
//            *s = a[i];
//
//}
//void main()
//{
//    FILE* wf;
//    STU a[N] = { { "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
//    { "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71} }, m;
//    int i;
//    system("CLS");
//    printf("*****The original data*****\n");
//    for (i = 0; i < N; i++)
//        printf("No=%s Mark=%d\n", a[i].num, a[i].s);
//    fun(a, &m);
//    printf("*****THE RESULT*****\n");
//    printf("The lowest :%s, %d\n", m.num, m.s);
//    /******************************/
//    wf = fopen("out.dat", "w");
//    fprintf(wf, "%s, %d", m.num, m.s);
//    fclose(wf);
//    /*****************************/
//}


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
        for (j = i; j < N; j++)
            a[i][j] = a[i][j] * m;
    }
}
void main()
{
    int a[N][N], m, i, j;
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

}
