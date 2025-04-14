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
	printf("---------- 扫雷 ----------\n");
	// 打印列号
	printf("   "); // 对齐行号
	for (j = 1; j <= col; j++) {
		printf("%2d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++) {
		// 打印行号
		printf("%2d ", i);
		for (j = 1; j <= col; j++) {
			// 显示逻辑：
			// 1. 如果是标记 'F'，直接显示
			// 2. 如果是未揭开的 '*', 显示 '*'
			// 3. 如果是数字或空格，按规则显示
			if (board[i][j] == 'F') {
				printf(" F "); // 标记显示为 F
			}
			else if (board[i][j] == '*') {
				printf(" * "); // 未揭开显示 *
			}
			else if (board[i][j] == '0') {
				printf("   "); // 空格（0 不显示）
			}
			else {
				printf(" %c ", board[i][j]); // 数字 1-8
			}
		}
		printf("\n");
	}
	printf("--------------------------\n");
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
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

	/*int i = 0;
	int j = 0;
	int ret = 0;
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			ret += (int)mine[x + i][y + j];
		}
	}
	return ret - 9 * '0';*/
}
static void ExpandEmpty(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	// 检查周围8个格子
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int nx = x + i;
			int ny = y + j;
			// 确保在边界内且未被处理过
			if (nx >= 1 && nx <= ROW && ny >= 1 && ny <= COL &&
				show[nx][ny] == '*' && mine[nx][ny] == '0') {
				int count = get_mine_count(mine, nx, ny);
				show[nx][ny] = count + '0';
				// 如果周围无雷，继续递归展开
				if (count == 0) {
					ExpandEmpty(mine, show, nx, ny);
				}
			}
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x, y;
	char op; // 操作类型：'D'揭开，'F'标记
	int ret = row * col - MineCount;
	while (1) {
		printf("输入操作 (D: 揭开/F: 标记) 和坐标 (如 D 3 3): ");
		scanf(" %c %d %d", &op, &x, &y); // 注意空格跳过换行符
		if (x < 1 || x > row || y < 1 || y > col) {
			printf("坐标非法！\n");
			continue;
		}

		if (op == 'D' || op == 'd') { // 揭开格子
			if (show[x][y] == 'F') {
				printf("该位置已标记，无法揭开！\n");
				continue;
			}
			if (mine[x][y] == '1') {
				printf("很遗憾，你被炸死了\n");
				PrintBoard(mine, row, col);
				break;
			}
			else {
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				// 如果周围无雷，递归展开
				if (count == 0) {
					ExpandEmpty(mine, show, x, y);
				}
				PrintBoard(show, row, col);
				ret--;
			}
		}
		else if (op == 'F' || op == 'f') { // 标记地雷
			if (show[x][y] == '*') {
				show[x][y] = 'F';
				PrintBoard(show, row, col);
			}
			else if (show[x][y] == 'F') {
				show[x][y] = '*'; // 取消标记
				PrintBoard(show, row, col);
			}
			else {
				printf("该位置无法标记！\n");
			}
		}
		else {
			printf("无效操作！\n");
		}

		// 胜利条件：所有非雷格已揭开
		if (ret == 0) {
			printf("恭喜你赢了！\n");
			PrintBoard(mine, row, col);
			break;
		}
	}
}