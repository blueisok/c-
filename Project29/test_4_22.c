#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int m = 0;
//	//void* p = &a;
//	//int p = a;
//	m = sizeof(int) * p;//报错程序必须包含算术类型
//	//表示计算式 意思为相乘，不是将指针p的值强制类型转换，再sizefo计算大小
//	return 0;
//}

//void fun(char* arr)
//{
//	static char i = ' ';//static 修饰i,空格只执行一次，后面都执行逗号
//	printf("%c %s", i, arr);
//	i = ',';
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	char arr[6] = { 0 };
//	gets(arr);
//	for ( i = 0; i<5; i++)
//	{
//		fun(arr);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, m;
//	m = (i = 1, 2);//逗号运算符的优先性最低，先将i赋值为1，再执行常量表达式（逗号运算），舍弃左值
//	printf("%d %d", i, m);// 1 2
//	return 0;
//}

//#include  <stdio.h>
//#include  <string.h>
//#include  <stdlib.h>
//#include  <ctype.h>
//char* fun(char* s)
//{
//    int  i, j, k, n;    char* p, * t;
//    n = strlen(s) + 1;
//    t = (char*)malloc(n * sizeof(char));
//    p = (char*)malloc(n * sizeof(char));
//    j = 0; k = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (isdigit(s[i])) {
//            /**********found**********/
//            p[j] = s[i]; j++;
//        }
//        else
//        {
//            t[k] = s[i]; k++;
//        }
//    }
//    /**********found**********/
//    for (i = 0; i < k; i++) p[j + i] = t[i];
//    p[j + k] = 0;
//    /**********found**********/
//    return p;
//}
//void main()
//{
//    char  s[80];
//    printf("Please input: ");  scanf("%s", s);
//    printf("\nThe result is: %s\n", fun(s));
//}

#include <stdio.h>
#include <string.h>

void fun(char* s, char  t[])
{
    int n = strlen(s);
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] % 2 == 0 || i % 2 != 0)
        {
            t[j++] = s[i];
        }
    }
    t[j] = 0;
}

void main()
{
    char   s[100], t[100]; void NONO();
    printf("\nPlease enter string S:"); scanf("%s", s);
    fun(s, t);
    printf("\nThe result is: %s\n", t);
   
}
