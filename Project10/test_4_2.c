#define _CRT_SECURE_NO_WARNINGS
//文件的使用
//文件分为 文本文件和二进制文件
//可以用结构体类型来定义文件类型的指针形式：FILE*fp

//fopen函数的使用形式：fopen(文件名，文件使用方式）
//函数返回FILE*,无论何种方式打开失败返回NULL

//文件使用方式：  r:为读打开的文本文件(不存在则出错）   rb:为读打开的二进制文件
//               w:为写打开的文本文件（不存在则新建，存在则覆盖原有内容）   wb:为写打开的二进制文件  ab+:与a+相同，只是添加数据后，可以通过位置函数，设置读的起始位置
//a:为在文件后面添加数据打开的文本文件  ab:为文件后添加数据打开的二进制文件 a+:与a相同，只是添加数据后，可以从头开始读
//r+:为读和写打开的文本文件             rb+:为读和写打开的二进制文件
//w+:先建立一个新文件，进行写操作，随后可以从头开始读，如果指定文件已存在，文件原有内容消失
//wb+:功能与w+相同，只是随后的读写时，可以以位置函数设置读和写的起始位置
//#include<stdio.h>
//int main()
//{
//	char buf[100] = {0};
//	FILE*pf=fopen("C:\\c\\c2\\test.txt", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	fgets(buf, 100, pf);//可以指定数组，指定大小，还有流
//	printf("%s", buf);
//	fclose(pf);
//	pf == NULL;

//	return 0;
//}
//char* fgets(char* str, int num, FILE* stream);
//从流中读取字符并将其作为 C 字符串存储到 str 中，直到读取 （num - 1） 字符或达到换行符或文件末尾，以先发生者为准。
//换行符会使 fgets停止读取，但该函数将其视为有效字符，并包含在复制到 str 的字符串中，终止空字符会自动追加到复制到 str 的字符之后。
//请注意，fgets 与 gets 完全不同：fgets 不仅接受流参数，还允许指定 str 的最大大小，并在字符串中包含任何结尾换行符。


#include<stdio.h>
//int main()
//{
//	char buf[100] = { "0"};
//	printf("输入句子\n");
//	fgets(buf, 100, stdin);//stdin 标准输入  stdout 标准输出
//	FILE* pf = fopen("C:\\c\\c2\\test.txt", "a");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	fputs(buf, pf);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}
//int fputs(const char* str, FILE* stream);
//写入要流式传输的字符串
//将 str 指向流的 C 字符串写入流。
//该函数开始从指定的地址 （str） 进行复制，直到到达终止空字符 （'\0'）。此终止空字符不会复制到流中

int main()
{
	char buf=0;
	FILE* pf = fopen("C:\\c\\c2\\test.txt", "w");
	if (pf==NULL)
	{
		return 0;
	}
	//fputc('c', pf);或
	buf = getchar();
	fputc(buf, pf);
	fclose(pf);
	pf == NULL;
	return 0;
}