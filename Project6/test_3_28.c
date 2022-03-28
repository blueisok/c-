//strstr查找子字符串，如果有子子字符串从第一个子字符串开始返回字符（不仅仅返回子字符串，是从子字符串开始返回，返回地址）
//const char* strstr(const char* str1, const char* str2);
//strstr的模拟实现

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* ret = p1;//暂时的指针保存位置
//	if (p2=='\0')
//	{
//		return p1;
//	}
//	while (*ret)
//	{
//		 s1 = ret;//如果未完全找到子字符串，将是s1的地址回归到ret地址
//		 s2 = p2;//将s2的地址回归到初始地址
//		while (*s1!='\0'&&*s2!='\0'&&*s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2=='\0')
//		{
//			return ret;
//		}
//		ret++;
//	}
//	return NULL;//找不到子字符串
//}
//int main()
//{
//	char* arr1 = "abbcde";//字符常量,不可修改
//	char* arr2 = "bcd";
//	char* ad = my_strstr(arr1, arr2);
//	printf("子字符串是%s", ad);
//	return 0;
//}

//strncpy的模拟实现

//char* my_strncpy(char* p1, const char* p2,int n)
//{
//	assert(p1 && p2);
//	char* sta = p1;
//	while ((*p1++ = *p2++)&& n)
//	{
//		n--;
//	}
//	if (n)
//	{
//		while (--n)
//		{
//			*p1++ = '\0';
//		}
//	}
//	return sta;
//}
//int main()
//{
//	char arr1[50] = "abcf";
//	char arr2[] = "adeff";
//	my_strncpy(arr1, arr2,2);
//	printf("%s", arr1);
//	return 0;
//}

//strtok的使用
//char * strtok ( char * str, const char * delimiters );
int main()
{
	char arr[] = "123@45.678.12";
	char* p = "@.";
	char arr2[50] = { 0 };
	strcpy(arr2, arr);
	for (char* sz = strtok(arr, p); sz!= NULL; sz = strtok(NULL, p))
	{
		printf("%s", sz);
	}
	return 0;
}