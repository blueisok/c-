#define _CRT_SECURE_NO_WARNINGS
////对二进制数据按学号排序（从小到大）
//#include  <stdio.h>
//#define    N    5
//typedef struct student {
//    long  sno;
//    char  name[10];
//    float  score[3];
//} STU;
//void fun(char* filename)
//{
//    FILE* fp;      int  i, j;
//    STU  s[N], t;
//    /**********found**********/
//    fp = fopen(filename, "rb");
//    fread(s, sizeof(STU), N, fp);
//    fclose(fp);
//    for (i = 0; i < N - 1; i++)
//        for (j = i + 1; j < N; j++)
//            /**********found**********/
//            if (s[i].sno > s[j].sno)
//            {
//                t = s[i];  s[i] = s[j];  s[j] = t;
//            }
//    fp = fopen(filename, "wb");
//    /**********found**********/
//    fwrite(s, sizeof(STU), N, fp);
//    fclose(fp);
//}
//void main()
//{
//    STU  t[N] = { {10005,"ZhangSan", 95, 80, 88}, {10003,"LiSi", 85, 70, 78},
//              {10002,"CaoKai", 75, 60, 88}, {10004,"FangFang", 90, 82, 87},
//              {10001,"MaChao", 91, 92, 77} }, ss[N];
//    int  i, j;      FILE* fp;
//    fp = fopen("student.dat", "wb");
//    fwrite(t, sizeof(STU), 5, fp);
//    fclose(fp);
//    printf("\n\nThe original data :\n\n");
//    for (j = 0; j < N; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", t[j].sno, t[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", t[j].score[i]);
//        printf("\n");
//    }
//    fun("student.dat");
//    printf("\n\nThe data after sorting :\n\n");
//    fp = fopen("student.dat", "rb");
//    fread(ss, sizeof(STU), 5, fp);
//    fclose(fp);
//    for (j = 0; j < N; j++)
//    {
//        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
//        for (i = 0; i < 3; i++)  printf("%6.2f ", ss[j].score[i]);
//        printf("\n");
//    }
//}
//
//
//#include <stdio.h>
//#include <string.h>
//void  fun(char  s[], int  n)
//{
//    char  a[80], * p;
//    int  i;
//    /**********found***********/
//    p = s;
//    for (i = 0; i < n; i++)  a[i] = '*';
//    do
//    {
//        a[i] = *p;
//        i++;
//    }
//    /**********found***********/
//    while (*p++);
//    a[i] = 0;
//    strcpy(s, a);
//}
//void main()
//{
//    int  n;        char  s[80];
//    printf("\nEnter a string  :  "); gets(s);
//    printf("\nThe string \"%s\"\n", s);
//    printf("\nEnter n ( number of * )  :  ");  scanf("%d", &n);
//    fun(s, n);
//    printf("\nThe string after insert : \"%s\" \n", s);
//}
//


#include <stdio.h>
# define N  50
# define M  11
void fun(int* a, int* b)
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        b[i] = 0;//初始化b为0
    }
    for (j = 0; j < N; j++)
    {
        if (a[j] >= 100)
        {
            b[10]++;
        }
        else
        {
            (b[a[j]/10])++;
        }
    }
}
double  rnd()
{
    static int t = 29, c = 217, m = 1024, r = 0;
    r = (r * t + c) % m;
    return((double)r / m);
}
void main()
{

    int age[N], i, d[M];
    int b[N] = { 32,45,15,12,86,49,97,3,44,52,17,95,63 };
    for (i = 0; i < N; i++)
        age[i] = (int)(115 * rnd());    
    printf("The original data :\n");
    for (i = 0; i < N; i++)
        printf((i + 1) % 10 == 0 ? "%4d\n" : "%4d", age[i]);  
    printf("\n\n");
    fun(age, d);
    for (i = 0; i < 10; i++)
        printf("%4d---%4d  :%4d\n", i * 10, i * 10 + 9, d[i]);
    printf("Over 100  :  %4d\n", d[10]);
}