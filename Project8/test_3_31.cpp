#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//const 的使用易错（在.c的文件中可能不会报错但在.cpp中会）

//int main()
//{
//	char a = 0;
//	char b = 0;
//	char* arr=&a;
//	const char* arr2=&b;
//	arr2 = arr;//左值为const char*，右值为char*可以转化，因左边指针有右边指针的所指向类型的全部限定符
//	//arr = arr2;   //反过来就会报错
//	
//	//不能将 "const char *" 类型的值分配到 "char *" 类型的实体	
//
//	return 0;
//}

//void my(const char** arr2)
//{
//	;
//}
//int main()
//{
//	char a = 0;
//	char b = 0;
//	char* arr = &a;
//	char** arr2 = &arr;
//	char* cpp = &b;
//	const char** cpp2= &cpp;
//	//arr2 = cpp2;  //char**与const char**不相容，const char**是一个没有限定符的指针类型，
// 	//cpp2 = arr2;
//	// 他的类型是指向有const限定符char类型的指针的指针（const float*类型也是）
//	// 所以正反赋值，形参与实参的配对都不行，会报错
//	//例如
//	my(arr2);
//	//	“void my(const char**)”: 无法将参数 1 从“char * *”转换为“const char** ”
//
//	return 0;
//}

//const并不会把变量变成常量，有const只能表示这个符号不能被赋值，但不能防止通过程序的内部，甚至外部来修改此值
