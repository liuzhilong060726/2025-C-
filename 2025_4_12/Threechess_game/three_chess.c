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