#define _CRT_SECURE_NO_WARNINGS
//将最后一个学生的数据写入
#include  <stdio.h>
#define    N    5
typedef struct  student {
    long  sno;
    char  name[10];
    float  score[3];
} STU;
void fun(char* filename, STU  n)
{
    FILE* fp;
    /**********found**********/
    fp = fopen(filename, "rb+");
    /**********found**********/
    fseek(fp, -(long)sizeof(STU), SEEK_END);
    /**********found**********/
    fwrite(&n, sizeof(STU), 1, fp);
    fclose(fp);
}
void main()
{
    STU  t[N] = { {10001,"MaChao", 91, 92, 77}, {10002,"CaoKai", 75, 60, 88},
              {10003,"LiSi", 85, 70, 78},    {10004,"FangFang", 90, 82, 87},
              {10005,"ZhangSan", 95, 80, 88} };
    STU  n = { 10006,"ZhaoSi", 55, 70, 68 }, ss[N];
    int  i, j;      FILE* fp;
    fp = fopen("student.dat", "wb");
    fwrite(t, sizeof(STU), N, fp);
    fclose(fp);
    fp = fopen("student.dat", "rb");
    fread(ss, sizeof(STU), N, fp);
    fclose(fp);
    printf("\nThe original data :\n\n");
    for (j = 0; j < N; j++)
    {
        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
        for (i = 0; i < 3; i++)  printf("%6.2f ", ss[j].score[i]);
        printf("\n");
    }
    fun("student.dat", n);
    printf("\nThe data after modifing :\n\n");
    fp = fopen("student.dat", "rb");
    fread(ss, sizeof(STU), N, fp);
    fclose(fp);
    for (j = 0; j < N; j++)
    {
        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
        for (i = 0; i < 3; i++)  printf("%6.2f ", ss[j].score[i]);
        printf("\n");
    }
}

//统计一行的单词数，
//#include<string.h>
//#include<stdio.h>
//#define N 80
//int fun(char* s)
//{
//    int i, j = 0;
//    for (i = 0; s[i] != '\0'; i++)
//        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0')) 
//    return j;
//}
////void main()
//{
//    FILE* wf;
//    char line[N];
//    int num = 0;
//    printf("Enter a string:\n ");
//    gets(line);
//    num = fun(line);
//    printf("The number of word is:%d\n\n ", num);
//    /******************************/
//    wf = fopen("out.dat", "w");
//    fprintf(wf, "%d", fun("a big car"));
//    fclose(wf);
//    /*****************************/
//}

#include <stdio.h>
#include <stdlib.h>
typedef  struct  aa
{
    int  data;
    struct  aa* next;
} NODE;
NODE* Creatlink(int  n, int  m)
{
    NODE* h = NULL, * p, * s;
    int  i;
    /**********found***********/
    p = (NODE*)malloc(sizeof(NODE));
    h = p;
    p->next = NULL;
    for (i = 1; i <= n; i++)
    {
        s = (NODE*)malloc(sizeof(NODE));
        s->data = rand() % m;      s->next = p->next;
        p->next = s;             p = p->next;
    }
    /**********found***********/
    return  h;
}
void outlink(NODE* h)
{
    NODE* p;
    p = h->next;
    printf("\n\nTHE  LIST :\n\n  HEAD ");
    while (p)
    {
        printf("->%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void main()
{
    NODE* head;
    head = Creatlink(8, 22);
    outlink(head);
}
