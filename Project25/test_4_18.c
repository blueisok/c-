#define _CRT_SECURE_NO_WARNINGS
//#include  <stdlib.h>
//#include  <conio.h>
//#include  <stdio.h>
//double fun(int m)
//{
//    double t = 1.0;
//    int i;
//    for (i = 2; i <= m; i++)
//        /*************found**************/
//        t = t - 1.0 / i;//   1/t会截断
//  /*************found**************/
//    return t;
//}
//void main()
//{
//    int m;
//    system("CLS");
//    printf("\nPlease enter 1 integer numbers:\n");
//    scanf("%d", &m);
//    printf("\n\nThe result is %1f\n",
//        fun(m));
//}
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
void fun(char* str)
{
	int i=0;
	char* p = str;
	while (*p)
	{
		if (*p != ' ')
		{
			str[i++] = *p;
		}
		p++;
	}
	str[i] = '\0';//将结尾的\0放入
}
void main()
{
	char str[81];
	char Msg[] = "Input a string:";
	int n=0;
	//FILE *out;
	printf(Msg);
	gets(str);
	puts(str);
	fun(str);
	printf("*** str: %s\n", str);
	/******************************/
   /* out=fopen("out.dat","w");
	fun(Msg);
	fprintf(out,"%s",Msg);
	fclose(out);*/
	/******************************/
}
