#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//fprintf的使用
//struct S
//{
//	int a;
//	float m;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 10,3.14f,"hello" };//3.14f  f是float类型
//	FILE* pf = fopen("C:\\c\\c2\\test.txt", "w");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.a, s.m, s.arr); 与printf用法一致，但要指定输出流
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

//fscanf的使用
//int main()
//{
//	struct S s={0};
//	FILE* pf = fopen("C:\\c\\c2\\test.txt", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fscanf(pf, "%d %f %s", &s.a, &s.m, s.arr);//从流中读取数据，用法与scanf一致，但要指定流
//	printf("%d %f %s", s.a, s.m, s.arr);
//	return 0;
//}

//sprintf 有能力将一个结构体的内容转换为字符串
//将格式化数据写入字符串
//int sprintf ( char * str, const char * format, ... );

//struct S
//{
//	int a;
//	float m;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 10,3.14f,"hello" };
//	char buf[50] = { 0 };
//	sprintf(buf, "%d %f %s", s.a, s.m, s.arr);
//	//将格式化的数据转换为字符串放在buf中
//	printf("%s\n", buf);
//	return 0;
//}

//int sscanf(const char* s, const char* format, ...);
//从字符串中读取格式化数据
struct S
{
	int a;
	float m;
	char arr[20];
};
int main()
{
	struct S s = { 10,3.14f,"hello" };
	struct S tem = { 0 };
	char buf[50] = { 0 };
	sprintf(buf, "%d %f %s", s.a, s.m, s.arr);
	//将格式化的数据转换为字符串放在buf中
	sscanf(buf, "%d %f %s", &(tem.a), &(tem.m), tem.arr );
	//将buf中读取的格式化数据到tem中
	printf("%d %f %s", tem.a, tem.m, tem.arr);
	return 0;
}
