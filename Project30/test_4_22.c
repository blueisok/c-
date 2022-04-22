//#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//#define   N   3
//#define   M   4
///**********found**********/
//void fun(int(*a)[N], int k)
//{
//    int i, temp;
//    /**********found**********/
//    for (i = 0; i < N; i++)
//    {
//        temp = a[0][i];
//        /**********found**********/
//        a[0][i] = a[k][i];
//        a[k][i] = temp;
//    }
//}
//void main()
//{
//    int x[M][N] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} }, i, j;
//    printf("The array before moving:\n\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++) printf("%3d", x[i][j]);
//        printf("\n\n");
//    }
//    fun(x, 2);
//    printf("The array after moving:\n\n");
//    for (i = 0; i < M; i++)
//    {
//        for (j = 0; j < N; j++) printf("%3d", x[i][j]);
//        printf("\n\n");
//    }
//}


////冒泡排序（将ASCII码值小的排在前面）
//#include  <string.h>
//#include  <stdio.h>
//void fun(char  t[])
//{
//    char c;
//    int i, j;
//    /*************found**************/
//    for (i = strlen(t) - 1; i; i--)
//        for (j = 0; j < i; j++)
//            /*************found**************/
//            if (t[j] > t[j + 1])
//            {
//                c = t[j];
//                t[j] = t[j + 1];
//                t[j + 1] = c;
//            }
//}
//void main()
//{
//    char  s[81];
//
//    printf("\nPlease  enter a character string :");
//    gets(s);
//    printf("\n\nBefore sorting :\n  %s", s);
//    fun(s);
//    printf("\nAfter sorting decendingly:\n %s", s);
//}

#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char* ss)
{
	int i = 0;
	for (i = 0; i < strlen(ss); i++)
	{
		if (i % 2 == 1 && ss[i] >= 'a' && ss[i] <= 'z')
		{
			ss[i] = ss[i] - 32;//小写字母的ASCII码值比大写的大32
		}
	}
}
void main()
{
	//FILE* wf;
	char tt[81], s[81] = "abc4Efg";
	system("CLS");
	printf("\nPlease enter an string within 80 characters:\n");
	gets(tt);
	printf("\n\nAfter changing, the string\n  %s", tt);
	fun(tt);
	printf("\nbecomes\n %s\n", tt);
	/******************************/
	/*wf = fopen("out.dat", "w");
	fun(s);
	fprintf(wf, "%s", s);
	fclose(wf);*/
	/*****************************/
}
