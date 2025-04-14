#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/13 */

/* C语言初识 */
#include "game.h"

void Menu() {
	printf("****************************\n");
	printf("*********** 1.Play *********\n");
	printf("*********** 0.Exit *********\n");
	printf("****************************\n");
}
void game() {
	// 定义两个数组
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	// 初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// 打印棋盘
	PrintBoard(show, ROW, COL);
	// 布置雷
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);
	// 排查雷
	FindMine(mine, show, ROW, COL);
}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		Menu();
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