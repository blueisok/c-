#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
//void * memcpy ( void * destination, const void * source, size_t num );
//将 num 字节值从源指向的位置直接复制到目标所指向的内存块。
//该函数不检查源中是否有任何终止空字符 - 它始终精确地复制数字字节。
//可拷贝任意类型（而strcpy只能拷贝字符串）

//memcpy的使用
//struct S//结构体类型
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr1[] = { {"李华",18},{"张三",19} };
//	struct S arr2[2] = { 0 };//初始化为零，要指定数组大小
//	memcpy(arr2, arr1, sizeof(arr1));//sizeof(arr1)计算数组大小字节
//
//	return 0;
//}

//memcpy的模拟实现
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret =  dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//void*类型不能解引用，不能地址++，所以要强制类型转换，
//		++(char*)dest;//通过字节的大小来控制赋值，一个一个字节的赋值，一共size_t个字节
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	struct S arr1[] = { {"李明",19},{"张三",19} };
//	struct S arr2[2] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	char* k = strerror(errno);
//	printf("%s", k);
//	return 0;
//}
//	
//void* memmove(void* destination, const void* source, size_t num);
//memmove功能与memcpy一致但可处理重叠内存的拷贝
//memmove的使用
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);//20个字节5个数字，将起始的12345拷贝到34567
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//memmove模拟实现