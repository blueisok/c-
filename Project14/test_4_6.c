#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("*************************\n");
	printf("***1.add      2.del******\n");
	printf("***3.search   4.modify*****\n");
	printf("***5.show     6.sort******\n");
	printf("***0.exit            *****\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
	struct Contact con;
	initcontact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addcontact(&con);//添加通讯录
			break;
		case DEL:
			delcontact(&con);//删除通讯录
			break;
		case SEARCH://查找某个人的信息
			searchcontact(&con);
			break;
		case MODIFY://修改某个人信息
			modifycontact(&con);
			break;
		case SHOW:
			showcontact(&con);//传地址，速度快
			break;
		case SORT:
			sortcontact(&con);
			break;
		case EXIT:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}