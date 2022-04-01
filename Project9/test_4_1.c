#define _CRT_SECURE_NO_WARNINGS
//memmove的模拟实现
#include<stdio.h>
#include<assert.h>
//void*my_memmove(void* dest, const void* src, size_t count)
//{
//   assert(dest&&src);
//   void* ret = dest;
//	if (dest<src)
//	{
//		//从前到后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//第二种写法（函数）
//void* my_memmove (void*dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest<src||dest>(char*)src+count)
//	{
//		//从前向后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);//20个字节是控制拷贝多少字节的
//	for (int  i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//dest<src 前到后    ；dest>src&&dest<src+count 后到前
//dest>src+count  前到后或后到前（无重叠空间）

//系统大小端的判断
//1 为 00 00 00 01  0为高字节而1为低字节
//低地址----------------------->高地址
//小端法 01 00 00 00 低字节存在低地址，高字节存在高地址
//大端法 00 00 00 01 高字节存在低地址，低字节存在高地址
//所以判断第一个字节就可以判断（以1为例）

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (1==*p)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}