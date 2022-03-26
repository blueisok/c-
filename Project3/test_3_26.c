#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//冒泡排序：如果一个元素后有一个更小的数，就称为一个逆序，通过两两交换消除逆序
//结果为从小到大，最坏情况要n(n-1)/2次

//int main()
//{
//	int arr[] = { 2,4,6,5,1,7,9,8 };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 7; i++)//决定几行，比如2与4，6...8；4与6，5..8比较等等的次数
//	{
//		for ( j = 0; j <7-i; j++)//决定列数，决定每次比较的个数
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//	for ( i = 0; i < 8; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//冒泡排序的函数实现

//void bubble_sort(int arr[], int n)
//{
//
//	int j,i = 0;
//	for ( i = 0; i < n-1; i++)
//	{
//		for ( j = 0; j <n-1-i; j++)
//		{
//		  if (arr[j]>arr[j+1])
//		   {
//			int tem = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tem;
//		   }
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int arr[50];
//	printf("输入元素个数\n");
//	scanf("%d", &n);
//	printf("请输入排序的数字\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);//&可能因为arr数组未初始化，不能将首元素地址赋给数组名；
//	}
//	bubble_sort(arr, n);
//	printf("结果是");
//	for ( i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//快速排序：在待排序的n个元素中取一个元素k,把所以小于k的元素排在前面，大于的排后面，这是一趟排序
//在左右两边重复步骤，以此类推直到分割的子表长度为1
//最坏的情况是n（n-1)/2次，但实际的排序效率比冒泡排序高的多

