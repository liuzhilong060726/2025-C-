#pragma once

// ����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ȷ�����̴�С
#define ROW 3
#define COL 3

// ��������

// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

// ��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);

// �������
void PlayerMove(char board[ROW][COL], int row, int col);

// ��������
void ComputerMove(char board[ROW][COL], int row, int col);

// �ж���Ӯ
// ���Ӯ - '*'
// ����Ӯ - '#'
// ƽ�� - 'Q'
// ��Ϸ���� - 'C'
char Iswin(char board[ROW][COL], int row, int col);
