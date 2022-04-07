#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//sizeof的使用
//数组名是首元素地址（除了两种情况）
//1.sizeof(数组），计算的是整个数组的大小
//2.&数组，取出的是整个数组的地址
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7，包括\0,strlen不包括\0
//	printf("%d\n", sizeof(arr+0));//4或8，计算首元素地址，sizeof计算的地址的大小都是4（32位机器）或8（64位机器）
//	printf("%d\n", sizeof(*arr));//1，首元素，char类型为1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4或8，地址大小
//	printf("%d\n", sizeof(&arr+1));//4或8
//	printf("%d\n", sizeof(&arr[0]+1));//4或8
//	return 0;
//}

//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));//6,计算整个数组的大小
//	printf("%d\n", sizeof(arr + 0));//4或8，首元素地址
//	printf("%d\n", sizeof(*arr));//1，首元素
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4或8
//	printf("%d\n", sizeof(&arr + 1));//4或8
//	printf("%d\n", sizeof(&arr[0] + 1));//4或8
//	return 0;
//}

//strlen的使用
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值，strlen遇到\0停下
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//程序崩溃，strlen要传地址，而这是首元素
//	//printf("%d\n", strlen(arr[1]));//程序崩溃
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值，比上个语句小6  -6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值 -1
//	return 0;
//}


int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6,不包括\0
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//程序崩溃
	//printf("%d\n", strlen(arr[1]));//程序崩溃
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}