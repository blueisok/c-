#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//string.h中的函数实现

//strlen的实现
//strlen计算字符串的大小，不包括\0,计算时会将空格计算在内,strlen(arr);
//strlen的返回值是无符号整数所以strlen(arr)(3)-strlen(amd)(6)=3,(数字）是返回值

//1.函数部分不使用全局变量，局部变量（所以可以递归实现）
//int my_strlen(char* arr)//char*的指针保证每次加一，地址向后移动一位
//{
//	if (*arr!='\0')//易错：arr!='\0'
//	{
//		return 1 + my_strlen(arr + 1);//或return 1+my_strlen (++arr)
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	int sz=my_strlen(arr);//计算的字符数包括空格
//	printf("字符数是%d", sz);
//	return 0;
//}

//2.通过循环实现
//int my_strlen(char* arr)
//{
//	int i = 0;
//	while (*arr!='\0')
//	{
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int sz = my_strlen(arr);
//	printf("字符数是%d", sz);
//	return 0;
//}

//strcpy:   char * strcpy ( char * destination, const char * source );
//形式 strcpy(arr1,arr2);
//strcpy注意事项：1.源字符串必须以\0结束 ，会把源字符串的\0拷贝到目标空间
//2.目标空间必须足够大（能放下源字符串），必须可变
//strcpy的模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret =  dest;
//	while (*src!='\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//对\0的拷贝
//	return ret;//返回dest的初始地址
//}
//int main()
//{
//	char arr1[] = "helloworld";
//	char arr2[] = "good";
//	char* sz= my_strcpy(arr1, arr2);
//	printf("复制后数组是%s", sz);//sz可替换成arr1,因为arr1可找到ret,也就可以找到sz
//	return 0;
//}

//简化版（strcpy)
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++=*src++)//先*dest=*src,再分别加加，最后一次*dest被赋值为\0,跳出循环
	{
		;
	}
	return 0;
}
int main()
{
	char arr[] = "helloworld";
	char arr2[] = "good";
	my_strcpy(arr, arr2);
	printf("复制后数组是%s", arr);
	return 0;
}



