#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void fun(char p[])
//{
//	while (*p++)
//	{
//		printf("%c", *p);
//	}
//}
//int main()
//{
//	char arr[] = "eabcd";
//	fun(arr);
//	return 0;
//}
//
//#include  <stdio.h>
//void fun(int  m, int  a[10])
//{
//	int  i;
//	for (i = 0; i < 10; i++)
//		/**********found**********/
//		a[i] = 0;
//	while (m > 0)
//	{
//		/**********found**********/
//		i = m % 10;
//		a[i]++;
//		/**********found**********/
//		m = m / 10;
//	}
//}
//void main()
//{
//	int  m, a[10], i;
//	printf("输入数字 :  ");   scanf("%d", &m);
//	fun(m, a);
//	for (i = 0; i < 10; i++)   printf("%d,", a[i]);  printf("\n");
//}
//


#include  <stdio.h>

double fun(double  a[], int  n)
{
    int i = 0;
    double sum = 0.0,max,min;
    max = min = a[0];
    for (i = 0; i < n; i++)
    {
     
        sum += a[i];
        if (max<a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    sum = sum - max-min;
    return (sum/(n-2));

}

void main()
{
    double  b[10], r;    int  i;
    printf("依次输入10个数字 :  ");
    for (i = 0; i < 10; i++)   scanf("%lf", &b[i]);
    printf("数字是 :  ");
    for (i = 0; i < 10; i++)   printf("%4.1lf ", b[i]);    printf("\n");
    r = fun(b, 10);
    printf("平均数是 :  %f\n", r);
  
}



