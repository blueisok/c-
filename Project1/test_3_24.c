#include<stdio.h>
#include<stdlib.h>
//    柔性数组的使用

//柔性数组的条件 
//1.结构体中柔性数组前至少有一个定义变量
//2.计算结构体的内存时不会把柔性数组计算在内，柔性数组的内存是可变，可调的
//3.柔性数组的形式可以为arr[]或arr[0],只有支持C99标准时才可用

//柔性数组的优点 
//1.减少使用malloc和free不易出错
//2.储存时是连续的空间（柔性数组直接在前面空间增加），使计算机处理程序时便捷快速，
//减少了内存碎片

//struct S
//{
//	int a;
//	int arr[];//或int arr[0]
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->a = 100;
//	int i=0;
//	for ( i = 0; i <10; i++)
//	{
//		 ps->arr[i] = i;
//	}
//	for (int  i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放动态内存
//	free(ps);
//	ps = NULL;
//	return 0;
//}

// 不使用柔性数组达到相同效果
struct S
{
	int a;
	int* arr;
};
int main()
{
	struct S*p=(struct S*)malloc(sizeof(struct S));//对整个结构体开辟空间
	//储存结构体的空间，所以应强制类型转换为结构体的指针
	p->arr = (int*)malloc(10 * sizeof(int));//对arr指针开辟空间
	//因为arr为int类型所以应强制类型转换为int*的类型
	p->a = 100;
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);//应先释放arr的空间，如果先释放p的会造成无法找到arr去释放空间
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}
//此方法使用了多个malloc，更易编写错误，且储存空间不连续，效率更低，浪费了空间