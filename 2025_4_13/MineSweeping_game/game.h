#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+1
#define COLS COL+1

#define MineCount 10

// ��������

// ��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
// ��ӡ����
void PrintBoard(char board[ROWS][COLS], int row, int col);
// ������
void SetMine(char mine[ROWS][COLS], int row, int col);
// �Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);