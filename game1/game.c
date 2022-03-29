#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] =' ';
		}
	}
}
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row-1)
		{
			for (j = 0; j < col; j++)//打印分割行
			{
				printf("---");
					if (j<col-1)
					{
						printf("|");
					}
			}
		}
		printf("\n");

	}
}
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走->\n");
		printf("请玩家输入,下棋坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)//判断输入数据是否合法
		{
			if (board[x-1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此坐标已下\n");
			}
		}
		else
		{
			printf("输入错误，重新输入\n");
		}


	}
}
void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋->\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//生成0-2的随机值
		y = rand() % col;
		if (board[x][y]==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
		
	}
	return 1;
}
//判断是否获胜(共四种情况）
// 玩家获胜返回 *
// 电脑获胜返回 #
// 平局返回 Q
// 继续返回 C
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)//对三行的判断
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	for ( i = 0; i < col; i++)//对三列的判断
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')//对角线的判断
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (is_full(board,ROW,COL)==1)//对平局的判断
	{
		return 'Q';
	}
	return 'C';//上述都不满足返回C,继续
}


