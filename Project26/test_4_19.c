#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//#include <conio.h>
//#include <stdlib.h>
//void fun(char* str)
//{
//	int i=0;
//	char* p = str;
//	while (*p)
//	{
//		if (*p != ' ')
//		{
//			str[i++] = *p;
//		}
//		p++;
//	}
//	str[i] = '\0';//将结尾的\0放入
//}
//void main()
//{
//	char str[81];
//	char Msg[] = "Input a string:";
//	int n=0;
//	FILE *out;
//	printf(Msg);
//	gets(str);
//	puts(str);
//	fun(str);
//	printf("*** str: %s\n", str);
//	/******************************/
//   /* out=fopen("out.dat","w");
//	fun(Msg);
//	fprintf(out,"%s",Msg);
//	fclose(out);*/
//	/******************************/
//}


#include  <stdio.h>
double f1(double  x)
{
	return  x * x;
}
double f2(double x, double y)
{
	return  x * y;
}
double fun(double  a, double  b)
{
	/**********found**********/
	double (*f)();//函数指针变量的形式
	double  r1, r2;
	/**********found**********/
	f = f1; //函数指针变量只要赋变量名，不要给出参数
	r1 = f(a);
	/**********found**********/
	f = f2;
	r2 = (*f)(a, b);
	return  r1 + r2;
}
void main()
{
	double  x1 = 5, x2 = 3, r;
	r = fun(x1, x2);
	printf("\nx1=%f,  x2=%f,  x1*x1+x1*x2=%f\n", x1, x2, r);
}