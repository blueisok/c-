#define _CRT_SECURE_NO_WARNINGS
//#include  <stdio.h>
//int fun(char* s)
//{
//    int  n = 0, flag = 0;
//    while (*s != '\0')
//    {
//        if (*s != ' ' && flag == 0) {
//            /**********found**********/
//            n++;  flag = 1;
//        }
//        /**********found**********/
//        if (*s == ' ')  flag = 0;
//        /**********found**********/
//        s++;
//    }
//    return  n;
//}
//void main()
//{
//    char  str[81];    int  n;
//    printf("\nEnter a line text:\n");  gets(str);
//    n = fun(str);
//    printf("\nThere are %d words in this text.\n\n", n);
//}
//
//
//#include <stdlib.h>
//#include <stdio.h>
//#include <conio.h>
//#define N 20
//int fun(float* s, int n, float* aver)
//{
//    float ave, t = 0.0;
//    int count = 0, k, i;
//    for (k = 0; k < n; k++)
//        /*************found**************/
//        t = s[k] + t;
//    ave = t / n;
//    for (i = 0; i < n; i++)
//        if (s[i] < ave) count++;
//    /*************found**************/
//    *aver = ave;
//    return count;
//}
//void main()
//{
//    float s[30], aver;
//    int m, i;
//    system("CLS");
//    printf("\nPlease enter m: ");
//    scanf("%d", &m);
//    printf("\nPlease enter %d mark :\n", m);
//    for (i = 0; i < m; i++) scanf("%f", s + i);
//    printf("\nThe number of students :%d\n", fun(s, m, &aver));
//    printf("Ave=%f\n", aver);
//}

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int fun(int* s, int t, int* k)
{
	int i;
	int max = s[0];
	for (i = 1; i < t; i++)
	{
		if (s[i] > max)
		{
			max = s[i];
			*k = i;
		}
	}
	return *k;
}
void main()
{
	FILE* wf;
	int a[10] = { 876,675,896,101,301,401,980,431,451,777 }, k;
	system("CLS");
	fun(a, 10, &k);
	printf("%d, %d\n ", k, a[k]);
	/******************************/
	wf = fopen("out.dat", "w");
	fprintf(wf, "%d, %d", k, a[k]);
	fclose(wf);
	/*****************************/
}