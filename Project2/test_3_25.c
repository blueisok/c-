#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//     查找方式

//顺序查找：从线性表的第一个元素开始，逐个与被查找的元素比较，直到被找到为止
//平均查找次数：n/2
//以下两种情况只能使用顺序查找
//1.线性表为无序表（表中元素是无序的）
//2.即使线性表是有序的，如果采用的是链式储存结构

//int main()
//{
//	int a = 11;
//	int arr[10] = { 1,2,3,4,5,10,6,7,8,9 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		if (a == arr[i])
//		{
//			printf("找到了下标是%d\n", i);
//			break;
//		}
//	}
//	if (i==10)
//	{
//		printf("未找到此元素\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	int arr[10] = { 1,2,3,4,5,10,6,7,8,9 };
//	int i = 0;//这种写法会出现bug,因为for循环中的int i,只会作用与for循环，外部i的值未变
//	for (int i = 0; i < 10; i++) //最好去for循环的int i,只保留外部的int i
//	{
//		if (a == arr[i])
//		{
//			printf("找到了下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("未找到此元素\n");
//	}
//	return 0;
//}

//二分查找法：每次与中间项比较大小，如果比中间大则去掉前面一半，继续与后面的一半的中间项比较
//二分查找的两个条件
//1.用顺序储存结构 2.线性表为有序表，此处的有序特指从小到大排序，但允许相邻元素相等
//二分查找最坏的情况是查找log 2n次，大大提高了查找的效率

int main()
{
	int arr[10] = { 1,2,3,4,5,7,7,8,9,10 };
	int sz = (sizeof(arr) / sizeof(arr[0]));//计算数组的元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
	int a = 7;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a >arr [mid])
		{
			left = mid + 1;//大于中间项，左下标调整位置
		}
		else if (a < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标是%d\n", mid);
			break;//跳出while循环，break语句对if-else的条件语句不起作用
		}
	}
	if (left>right)
	{
		printf("找不到该元素\n");
	}
	
	return 0;
}