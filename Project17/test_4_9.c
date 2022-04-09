#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//fseek的使用
//重新定位流位置指示器（指定文件位置，开始读取）
//int fseek(FILE* stream, long int offset, int origin);
//SEEK_SET	文件开头
//SEEK_CUR	文件指针的当前位置
//SEEK_END	文件结束
//int main()
//{
//	FILE* pf = fopen("C:\\c\\c2\\test.txt", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//	//fputs("abcdef", pf);
//	fseek(pf, -2, SEEK_END);//刚开始SEEK_CUR文件指针的当前位置在文件开始位置，数字是偏移量有正负
//	int ch=fgetc(pf);//读取当前位置的字符，并返回字符
//	printf("%c ", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell，rewind的使用
//获取流中的当前位置，从流中获得文件指针相当与初始地址的偏移量
//long int ftell ( FILE * stream );

//void rewind(FILE* stream);
//将流的位置设置为开头
//int main()
//{
//	FILE* pf = fopen("C:\\c\\c2\\test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//fputs("abcdef", pf);
//	fseek(pf, -2, SEEK_END);//刚开始SEEK_CUR文件指针的当前位置在文件开始位置，数字是偏移量有正负
//	int ch = fgetc(pf);//读取当前位置的字符，并返回字符
//	rewind(pf);//将文件指针设置为开头
//	int sh = ftell(pf);//从流中获得文件指针相当与初始地址的偏移量
//	printf("%c ", ch);
//	printf("%d", sh);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//perror, 将 errno 的值解释为错误消息，并将其打印到 stderr（标准错误输出流，通常是控制台），可以选择将其前面加上 str 中指定的自定义消息。
//void perror ( const char * str );     (stdio.h)
//ferror,检查是否设置了与流关联的错误指示器，如果设置了，则返回一个与零不同的值。
//int ferror ( FILE * stream );
//feof,检查是否设置了与流关联的文件结尾指示器，如果设置了与零不同的值，则返回一个与零不同的值。
//int feof ( FILE * stream );
int main()
{
	FILE* pf = fopen("C:\\c\\c2\\test.txt", "r");
	if (pf==NULL)
	{
		perror("the open file");
		return 0;
	}
	int ch = 0;
	while (ch=fgetc(pf)!=EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if(feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
