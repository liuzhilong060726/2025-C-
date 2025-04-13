#pragma once

// 所需头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 确定棋盘大小
#define ROW 3
#define COL 3

// 函数声明

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

// 打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col);

// 玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

// 判断输赢
// 玩家赢 - '*'
// 电脑赢 - '#'
// 平局 - 'Q'
// 游戏继续 - 'C'
char Iswin(char board[ROW][COL], int row, int col);
