#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma once
#define ROW 3// 棋盘行
#define COL 3// 棋盘列
void  InitBoard(char board[ROW][COL], int row, int col);//函数声明
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);

//告诉我们四种游戏状态
//玩家赢'*'
//电脑赢'#'
//平局'Q'
//继续' c'
