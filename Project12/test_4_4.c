#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}
void game()
{
	char board[ROW][COL] = {0};//初始化棋盘为0
	initboard(board, ROW, COL);//将棋盘初始化为' '(空格）
	displayboard(board, ROW, COL);//打印棋盘
	char ret = 0;
	while (1)
	{
		playermove(board, ROW, COL);//玩家下棋
		displayboard(board, ROW, COL);//打印棋盘
		ret=iswin(board, ROW, COL);//判断胜负
		if (ret!='C')//是C才能继续，不然进入if中
		{
			break;
		}
		computermove(board, ROW, COL);//电脑下棋
		displayboard(board, ROW, COL);//打印棋盘
		ret=iswin(board, ROW, COL);//判断胜负
		if (ret!='C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家获胜\n");
	}
	else if(ret=='#')
	{
		printf("电脑获胜\n");
	}
	else if(ret=='Q')
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		    menu();//目录
			printf("请选择\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出程序\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
			}	
	} while (input);


	
}
int main()
{
	test();
	return 0;
}