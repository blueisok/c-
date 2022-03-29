#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>//包含rand的头文件
#include<time.h>
void initboard(char board[ROW][COL],int row,int col);
void Display(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row,int col);
int  is_full(char board[ROW][COL], int row, int col);

