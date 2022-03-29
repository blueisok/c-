#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************\n");
	printf("**1.play  0.exit**\n");
	printf("******************\n");
}
void game()//整个游戏算法的实现
{
	char board[ROW][COL] = { 0 };
	 initboard(board,ROW,COL);//初始化棋盘(初始化为空格棋盘）
	 Display(board, ROW, COL);//打印棋盘
	 //下棋
	 int ret = 0;
	 while (1)
	 {
		 Playermove(board, ROW, COL);	
		 Display(board, ROW, COL);//打印棋盘		 
		ret= is_win(board, ROW, COL);
		if (ret!='C')//如果有*或#或Q则跳出循环
		{
			break;
		}
		 computermove(board, ROW, COL);
		 Display(board, ROW, COL);
		 ret=is_win(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
	 }
	 if (ret=='*')
	 {
		 printf("玩家获胜\n");
	 }
	 else if (ret=='#')
	 {
		 printf("电脑获胜\n");
	 }
	 else
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
		menu();
		printf("请选择->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
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