#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int arr[] = { 1,2,3,4,5,6,7 };
//#define TEW (sizeof(arr)/sizeof(arr[0]))//7  (sizeof返回的是无符号数）
//int main()
//{
//	int d = -1;
//	if (d<=TEW-2)//signed int 和unsigned int 测试相等性d 被升级为unsigned int 类型，-1的无符号数非常大
//	{//整数升级
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");//结果为haha
//	}
//
//	return 0;
//}
//
////解决方法
//int main()
//{
//	int d = -1;
//	if (d <= (int)TEW - 2)//都转换为有符号数，
//	{//整数升级
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");//结果为haha
//	}
//
//	return 0;
//}

//链表，输出数据域为偶数的值，并返回
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//typedef struct aa
//{
//    int data;
//    struct aa* next;
//} NODE;
//int fun(NODE* h)
//{
//    int sum = 0;
//    NODE* p;
//    p = h->next;
//    /*************found**************/
//    while (p)
//    {
//        if (p->data % 2 == 0)
//            sum += p->data;
//        /*************found**************/
//        p = p->next;
//    }
//    return sum;
//}
//NODE* creatlink(int n)
//{
//    NODE* h, * p, * s;
//    int i;
//    h = p = (NODE*)malloc(sizeof(NODE));
//    for (i = 1; i < n; i++)
//    {
//        s = (NODE*)malloc(sizeof(NODE));
//        s->data = rand() % 16;
//        s->next = p->next;
//        p->next = s;
//        p = p->next;
//    }
//    p->next = NULL;
//    return h;
//}
//void outlink(NODE* h)
//{
//    NODE* p;
//    p = h->next;
//    printf("\n\n The LIST :\n\n HEAD");
//    while (p)
//    {
//        printf("->%d", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//void main()
//{
//    NODE* head; int sum;
//    system("CLS");
//    head = creatlink(10);
//    outlink(head);
//    sum = fun(head);
//    printf("\nSUM=%d", sum);
//}


#include <stdio.h>
#define N 80
int fun(char* str)
{
	int i = 0;
	int j = 0;
	int flag = 1;
	while (str[j])
	{
		j++;
	}//j为\0退出
	j--;//移到\0前一位
	for (i = 0; i < j; i++, j--)
	{
		if (str[i] != str[j])
		{
			flag = 0;//不是回文
			break;
		}
	}
	return flag;
}

void main()
{
	char s[N];
	//FILE *out;
		//char *test[]={"1234321","123421","123321","abcdCBA"};
	int i = 0;
	printf("Enter a string : ");
	gets(s);
	printf("\n\n");
	puts(s);
	if (fun(s))
		printf("YES\n");
	else
		printf("NO\n");
	///************************************/
	//out=fopen("out.dat","w");
	//for(i=0;i<4;i++)
	//	if(fun(test[i]))
	   //	fprintf(out,"YES\n");
	   //else
	   //	fprintf(out,"NO\n");
	//fclose(out);
	///************************************/
}