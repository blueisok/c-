#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void fun()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);// 1 1 1 1 1 1 1 1 1 1 
//}
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		fun();
//	}
//	return 0;
//}

//void fun()
//{
//	static int i = 0;// static 修饰局部变量使变量的生命周期变长，作用与整个工程，储存在静态区
// static 修饰全局变量，限制全局变量只能在本源文件使用，
//	i++;
//	printf("%d ", i);//1 2 3 4 5 6 7 8 9 10
//}
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		fun();
//	}
//	return 0;
//}

//fun 函数对链表排序
#include  <stdio.h>
#include  <stdlib.h>
#define    N    6
typedef struct node {
    int  data;
    struct node* next;
} NODE;
void fun(NODE* h)
{
    NODE* p, * q;    int  t;
    /**********found**********/
    p = h->next;
    while (p) {
        /**********found**********/
        q = p->next;
        while (q) {
            /**********found**********/
            if (p->data > q->data)
            {
                t = p->data;  p->data = q->data;  q->data = t;
            }
            q = q->next;
        }
        p = p->next;
    }
}
NODE* creatlist(int  a[])
{
    NODE* h, * p, * q;        int  i;
    h = (NODE*)malloc(sizeof(NODE));
    h->next = NULL;
    for (i = 0; i < N; i++)
    {
        q = (NODE*)malloc(sizeof(NODE));
        q->data = a[i];
        q->next = NULL;
        if (h->next == NULL)  h->next = p = q;
        else { p->next = q;  p = q; }
    }
    return  h;
}
void outlist(NODE* h)
{
    NODE* p;
    p = h->next;
    if (p == NULL)  printf("The list is NULL!\n");
    else
    {
        printf("\nHead  ");
        do
        {
            printf("->%d", p->data); p = p->next;
        } while (p != NULL);
        printf("->End\n");
    }
}
void main()
{
    NODE* head;
    int  a[N] = { 0, 10, 4, 2, 8, 6 };
    head = creatlist(a);
    printf("\nThe original list:\n");
    outlist(head);
    fun(head);
    printf("\nThe list after sorting :\n");
    outlist(head);
}

