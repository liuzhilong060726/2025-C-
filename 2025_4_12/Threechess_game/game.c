#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row;  i++) {
		for (j = 0; j < col;  j++) {
			board[i][j] = ' ';
		}
	}
}

void PrintBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("玩家下棋\n");
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("坐标被占用，请重新输入\n");
			}
		}
		else {
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("电脑下棋\n");
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}