#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void initboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
		
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("输入下棋点的坐标(行 列）\n");
		scanf("%d %d", &x, &y);
		if (x>=1&&x<=row&&y>=1&&y<=col)//下棋合法
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] ='*';
				break;//跳出循环
			}
			else
			{
				printf("输入坐标已下，请重新输入\n");
			}
		}
		else
		{
			printf("下棋超出边界\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int i = 0;
	int j = 0;
	while (1)
	{
		 i = rand() % row;
		 j = rand() % col;
		if (board[i][j]==' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0;//只要棋盘有一个空格就返回0
			}
		}
	}
	return 1;
}

//返回'*'  玩家获胜      返回'#'  电脑获胜
//返回'Q'  平局          返回'C'  继续
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)//三行判断
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')//board[i][0]!=' '不能忘
		{
			return board[i][1];
		}
	}
	for ( i = 0; i < col; i++)//三列判断
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[0][i]!=' ')
		{
			return board[1][i];
		}
	}
	//对角判断
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (isfull(board, ROW, COL))//1为真，返回Q
	{
		return 'Q';
	}
	return 'C';//继续，
}