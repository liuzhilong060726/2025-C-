#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/12 */

/* C语言初阶 */
/* 三子棋游戏 */

#include "game.h"

void game() {
	// 存储数据 - 二维数组
	char board[ROW][COL];
	// 初始化棋盘
	InitBoard(board, ROW, COL);
	// 打印棋盘
	PrintBoard(board, ROW, COL);
	char ret = 0;
	while (1) {
		// 玩家下棋
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		// 判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		// 电脑下棋
		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		// 判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢了\n");
		PrintBoard(board, ROW, COL);
	}
	if (ret == '#') {
		printf("电脑赢了\n");
		PrintBoard(board, ROW, COL);
	}
	if (ret == 'Q') {
		printf("平局\n");
		PrintBoard(board, ROW, COL);
	}
}

void Menu() {
	printf("*********************************\n");
	printf("**********  三子棋游戏 **********\n");
	printf("**********   1. Play   **********\n");
	printf("**********   0. Exit   **********\n");
	printf("*********************************\n");
}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		// 打印菜单
		Menu();
		// 选择是否进行游戏
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
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
	return 0;
}

IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col) {
	//// 横向
	//int i = 0;
	//for (i = 0; i < row; i++) {
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
	//		return board[i][1];
	//	}
	//}
	//// 纵向
	//int j = 0;
	//for (j = 0; j < col; j++) {
	//	if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ') {
	//		return board[1][j];
	//	}
	//}
	//// 对角线
	//if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
	//	return board[1][1];
	//}
	//if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
	//	return board[1][1];
	//}

	// 改进
	int i = 0;
	int j = 0;
	int num1 = 0;
	int num2 = 0;
	//// 横向
	//for (i = 0; i < row; i++) {
	//	for (j = 0; j < col; j++) {
	//		if (board[i][j] == '*') {
	//			num1++;
	//		}
	//		if (board[i][j] == '#') {
	//			num2++;
	//		}
	//	}
	//	if (num1 == row) {
	//		return '*';
	//	}
	//	if (num2 == '#') {
	//		return '#';
	//	}
	//	num1 = 0;
	//	num2 = 0;
	//}
	//// 纵向
	//for (j = 0; j < row; j++) {
	//	for (i = 0; i < col; i++) {
	//		if (board[i][j] == '*') {
	//			num1++;
	//		}
	//		if (board[i][j] == '#') {
	//			num2++;
	//		}
	//	}
	//	if (num1 == row) {
	//		return '*';
	//	}
	//	if (num2 == '#') {
	//		return '#';
	//	}
	//	num1 = 0;
	//	num2 = 0;
	//}
	
	// 合并横向和纵向
	int num3 = 0;
	int num4 = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == '*') {
				num1++;
			}
			if (board[i][j] == '#') {
				num2++;
			}
			if (board[j][i] == '*') {
				num3++;
			}
			if (board[j][i] == '#') {
				num4++;
			}
		}
		if (num1 == row || num3 == row) {
			return '*';
		}
		if (num2 == col || num4 == col) {
			return '#';
		}
		num1 = 0;
		num2 = 0;
		num3 = 0;
		num4 = 0;
	}
	// 对角线
	for (i = 0; i < row; i++) {
		if (board[i][i] == '*') {
			num1++;
		}
		if (board[i][i] == '#') {
			num2++;
		}
	}
	if (num1 == row) {
		return '*';
	}
	if (num2 == row) {
		return '#';
	}
	num1 = 0;
	num2 = 0;
	for (j = 0; j < col; j++) {
		if (board[j][col - 1 - j] == '*') {
			num1++;
		}
		if (board[j][col - 1 - j] == '#') {
			num2++;
		}
	}
	if (num1 == col) {
		return '*';
	}
	if (num2 == col) {
		return '#';
	}
	
	// 平局
	int ret = IsFull(board, row, col);
	if (ret == 1) {
		return 'Q';
	}

	// 继续
	return 'C';
}