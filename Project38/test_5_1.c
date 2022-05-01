#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//#include  <string.h>
//#define   N   5
//#define   M   8
//void fun(char(*ss)[M])
//{
//    char* ps[N], * tp;    int  i, j, k;
//    for (i = 0; i < N; i++) ps[i] = ss[i];
//    for (i = 0; i < N - 1; i++) {
//        /**********found**********/
//        k = i;
//        for (j = i + 1; j < N; j++)
//            /**********found**********/
//            if (strlen(ps[k]) < strlen(ps[j])) k = j;
//        /**********found**********/
//        tp = ps[i];  ps[i] = ps[k]; ps[k] = tp;
//    }
//    printf("\nThe string after sorting by length:\n\n");
//    for (i = 0; i < N; i++)  puts(ps[i]);
//}
//void main()
//{
//    char  ch[N][M] = { "red","green","blue","yellow","black" };
//    int  i;
//    printf("\nThe original string\n\n");
//    for (i = 0; i < N; i++)puts(ch[i]);  printf("\n");
//    fun(ch);
//}


//#include<conio.h>
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//double fun(double x, int n)
//{
//    double s = 1.0, s1 = 1.0;
//    int i;
//    for (i = 1; i <= n; i++)
//    {
//        s1 = s1 * i;
//        s = s + pow(x, i) / s1;
//    }
//    return s;
//}
//void main()
//{
//    system("CLS");
//    printf("%f ", fun(0.3, 10));
//
//}

//#include <conio.h>
//#include <stdio.h>
///*************found**************/
//char* fun(char* s, char* t)
//{
//	int s1 = 0, t1 = 0;
//	char* ss, * tt;
//	ss = s;
//	tt = t;
//	while (*ss)
//	{
//		s1++;
//		/*************found**************/
//		ss++;
//	}
//	while (*tt)
//	{
//		t1++;
//		/*************found**************/
//		tt++;
//	}
//	if (t1 > s1)
//		return t;
//	else
//		return s;
//}
//void main()
//{
//	char a[80], b[80];
//	printf("\nEnter a string : ");
//	gets(a);
//	printf("\nEnter a string again: ");
//	gets(b);
//	printf("\nThe longer is :\n\n%s\n", fun(a, b));
//}


//#include <stdio.h>
//#include <string.h>
//#define   N    80
//void fun(char* w, int  m)
//{
//	int n = strlen(w);
//	int i, k = 0;
//	char j[N] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		 j[i] =  w[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (i < (n - m))
//			w[i] = w[m + i];
//		else
//		{
//			w[i] = j[k++];
//		}
//	}
//}
//void main()
//{
//
//	char  a[N] = "ABCDEFGHIJK";
//	int  m;
//	printf("The origina string :\n");
//	puts(a);
//	printf("\n\nEnter  m: ");
//	scanf("%d", &m);
//	fun(a, m);
//	printf("\nThe string after moving :\n");
//	puts(a);
//	printf("\n\n");
//
//}


//改进版（移动的方法）
#include <stdio.h>
#include <string.h>
#define   N    80
void fun(char* w, int  m)
{
	int i,j;
	char t;
	for ( i = 1; i <=m; i++)
	{
		t = w[0];
		for (j=1;w[j]!='\0';j++)
		{
			w[j - 1] = w[j];
		}
		w[j - 1] = t;
	}
}
void main()
{

	char  a[N] = "ABCDEFGHIJK";
	int  m;
	printf("The origina string :\n");
	puts(a);
	printf("\n\nEnter  m: ");
	scanf("%d", &m);
	fun(a, m);
	printf("\nThe string after moving :\n");
	puts(a);
	printf("\n\n");

}