#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//strcat的模拟实现
//char * strcat ( char * destination, const char * source );
//将源字符串的副本追加到目标字符串。目标中终止的空字符将被源的第一个字符覆盖，
//并且在目标中由两者串联形成的新字符串的末尾包含一个空字符。

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//while (*dest++)//这种写法错误虽然\0会退出循环，但最后还是加加了一个位置
//	//{
//	//	;//相当于整个函数运行完结果是hello\0world\0,所以输出hello
//	//}
//	while (*dest!='\0')//正确写法
//	{
//		dest++;
//	}
//	
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[50] = "hello";//此处应赋个足够大的值，不然函数会越界访问未初始化的值
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("追加后数组是%s", arr1);
//	return 0;
//}

//strcmp的模拟实现 
//int strcmp(const char* str1, const char* str2);
//此函数开始比较每个字符串的第一个字符。如果它们彼此相等，继续比较下一个字符，如果第一个数组字符大于第二个
//字符返回大于0的数，小于则返回小于0的数，完全相等的字符串则返回0

//int my_strcmp(const char* dest, const char* src)
//{   
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest!='\0'&&*src!='\0')
//	{
//		if (0==*dest-*src)
//		{
//			dest++;
//			src++;
//		}
//		else
//		{
//			return *dest - *src;//通过ASCII码值实现
//		}
//	}
//	if (*dest=='\0' && *src == '\0')
//	{
//		return 0;
//	}
//	else if ('\0' == *dest||'\0'==*src)
//	{
//		return *dest - *src;
//	}
//}
//int main()
//{
//	char arr1[] = "abbce";
//	char arr2[] = "abdce";
//	int sz=my_strcmp(arr1, arr2);
//	printf("%d", sz);
//	return 0;
//}

//strcmp 的简化版实现

//int my_strcmp(const char* dest, const char* src)
//{
//	assert(dest && src);//dest!=NULL&&src!=NULL
//	while (*dest==*src)
//	{
//		if (src == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	return *dest - *src;//通过ASCII码值实现
//}
//int main()
//{
//	char arr1[] = "abcff";
//	char arr2[] = "abcfa";
//	int sz = my_strcmp(arr1, arr2);
//	printf("%d", sz);
//	return 0;
//}

//strncmp 的模拟实现
int my_strncmp(const char* dest, const char* src, int n)
{
	
	assert(dest && src);
	while (*dest==*src&&n--&&n)//n表示是初始n为零时直接跳出循环
	{
		dest++;
		src++;
	}
	
	return *dest-*src;
}
int main()
{
	int input = 0;
	char arr1[] = "abcdef";
	char arr2[] = "abcef";
	printf("请输入比较的个数\n");
	scanf("%d", &input);
	int sz = my_strncmp(arr1, arr2,input);
	printf("%d", sz);
	return 0;
}