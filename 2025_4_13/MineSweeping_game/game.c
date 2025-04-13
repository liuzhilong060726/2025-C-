#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set){
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void PrintBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	printf("----------ɨ��----------\n");
	// ��ӡ�к�
	for (j = 0; j <= col; j++) {
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		// ��ӡ�к�
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ��----------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col) {
	int count = MineCount;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0') {
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	/*return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';*/

	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			ret += (int)mine[x + i][y + j];
		}
	}
	return ret - 9 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int ret = row * col - MineCount;
	while (1) {
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '0') {
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				PrintBoard(show, row, col);
				ret--;
			}
			else {
				printf("���ź����㱻ը����\n");
				PrintBoard(mine, row, col);
				break;
			}
		}
		else {
			printf("��������Ƿ�������������\n");
		}
		if (ret == 0) {
			printf("��ϲ��Ӯ��\n");
			PrintBoard(mine, row, col);
			break;
		}
	}
}