#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdio.h>
//struct S
//{
//	int a;
//	float m;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 10,3.14f,"hello" };//3.14f  f是float类型
//	FILE* pf = fopen("C:\\c\\c2\\test.txt", "w");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.a, s.m, s.arr); //与printf用法一致，但要指定输出流
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}


//#include  <stdio.h>
//#include  <string.h>
//#include  <ctype.h>
//void fun(char* s)
//{
//    int  k[26] = { 0 }, n, i, max = 0;    char  ch;
//    while (*s)
//    {
//        if (isalpha(*s)) {
//            /**********found**********/
//            ch = tolower(*s);
//            n = ch - 'a';
//            /**********found**********/
//            k[n] += 1;
//        }
//        s++;
//        /**********found**********/
//        if (max < k[n]) max = k[n];
//    }
//    printf("\nAfter count :\n");
//    for (i = 0; i < 26; i++)
//        if (k[i] == max) printf("\nletter  \'%c\' :  %d times\n", i + 'a', k[i]);
//}
//void main()
//{
//    char  s[81];
//    printf("\nEnter a string:\n\n");  gets(s);
//    fun(s);
//}


#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
	int i;
	double sum = 0.0;
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1.0 / (i * (i + 1));
	}
	return sum;
}
void main()
{
	system("CLS");
	printf("%f\n", fun(10));

}
