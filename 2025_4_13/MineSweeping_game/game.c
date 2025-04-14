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
	printf("---------- ɨ�� ----------\n");
	// ��ӡ�к�
	printf("   "); // �����к�
	for (j = 1; j <= col; j++) {
		printf("%2d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++) {
		// ��ӡ�к�
		printf("%2d ", i);
		for (j = 1; j <= col; j++) {
			// ��ʾ�߼���
			// 1. ����Ǳ�� 'F'��ֱ����ʾ
			// 2. �����δ�ҿ��� '*', ��ʾ '*'
			// 3. ��������ֻ�ո񣬰�������ʾ
			if (board[i][j] == 'F') {
				printf(" F "); // �����ʾΪ F
			}
			else if (board[i][j] == '*') {
				printf(" * "); // δ�ҿ���ʾ *
			}
			else if (board[i][j] == '0') {
				printf("   "); // �ո�0 ����ʾ��
			}
			else {
				printf(" %c ", board[i][j]); // ���� 1-8
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
	// �����Χ8������
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int nx = x + i;
			int ny = y + j;
			// ȷ���ڱ߽�����δ�������
			if (nx >= 1 && nx <= ROW && ny >= 1 && ny <= COL &&
				show[nx][ny] == '*' && mine[nx][ny] == '0') {
				int count = get_mine_count(mine, nx, ny);
				show[nx][ny] = count + '0';
				// �����Χ���ף������ݹ�չ��
				if (count == 0) {
					ExpandEmpty(mine, show, nx, ny);
				}
			}
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x, y;
	char op; // �������ͣ�'D'�ҿ���'F'���
	int ret = row * col - MineCount;
	while (1) {
		printf("������� (D: �ҿ�/F: ���) ������ (�� D 3 3): ");
		scanf(" %c %d %d", &op, &x, &y); // ע��ո��������з�
		if (x < 1 || x > row || y < 1 || y > col) {
			printf("����Ƿ���\n");
			continue;
		}

		if (op == 'D' || op == 'd') { // �ҿ�����
			if (show[x][y] == 'F') {
				printf("��λ���ѱ�ǣ��޷��ҿ���\n");
				continue;
			}
			if (mine[x][y] == '1') {
				printf("���ź����㱻ը����\n");
				PrintBoard(mine, row, col);
				break;
			}
			else {
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				// �����Χ���ף��ݹ�չ��
				if (count == 0) {
					ExpandEmpty(mine, show, x, y);
				}
				PrintBoard(show, row, col);
				ret--;
			}
		}
		else if (op == 'F' || op == 'f') { // ��ǵ���
			if (show[x][y] == '*') {
				show[x][y] = 'F';
				PrintBoard(show, row, col);
			}
			else if (show[x][y] == 'F') {
				show[x][y] = '*'; // ȡ�����
				PrintBoard(show, row, col);
			}
			else {
				printf("��λ���޷���ǣ�\n");
			}
		}
		else {
			printf("��Ч������\n");
		}

		// ʤ�����������з��׸��ѽҿ�
		if (ret == 0) {
			printf("��ϲ��Ӯ�ˣ�\n");
			PrintBoard(mine, row, col);
			break;
		}
	}
}