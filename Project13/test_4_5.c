#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//位段
//节省储存空间，只有int ;unsigned int ;signed int ;char;类型
//形式 位段成员后有个冒号和数字，数字表示占多少比特位，当字节装不下时会浪费剩下空间，直接开辟一个新字节
//位段的可移植性差
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d", sizeof(s));
//	return 0;
//}

//枚举优点(枚举是一个类型）
//增加了代码的可读性和可维护性
//使用方便一次可以定义多个变量
//相较与#define有类型检查，更严谨、
//防止了命名污染，便于调试

//enum Coloc（enum枚举的大小为一个整型的大小 4）
//{
//	//枚举常量（从0开始赋值，但可以赋初值，赋值后后面的枚举常量依次加一
//	RED,
//	GREEN,
//    BLUE
//};
//enum Coloc
//{
//	
//	RED,
//	GREEN=2,//赋初值
//	BLUE
//};
//int main()
//{
//	enum Coloc c = RED;//c赋值为RED后，不可以赋其他值
//	printf("%d %d %d", RED, GREEN, BLUE);
//	enum Coloc c = 2;//不可以将int 类型的2赋值给Coloc类型
//	return 0;
//}

//联合体-共用体(共用一个地址）
//用共用体测试大小端
//int pan()
//{
//	union U
//	{
//		char i;//i与a不可以同时使用
//		int a;
//	}u;
//	u.a = 1;
//	return u.i;
//}
//int main()
//{
//	if (1==pan())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//联合体的大小：1至少是最大成员的大小
//2.当最大成员的大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
union U
{
	int a;//对齐数 4
	char arr[5];//最大成员大小为 5  对齐数 1  所以最大对齐数的整数倍是8
};
int main()
{
	union U u;
	printf("%d", sizeof(u));//8
	return 0;
}