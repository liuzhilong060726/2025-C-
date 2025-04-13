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
		printf("�������\n");
		printf("���������꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("���걻ռ�ã�����������\n");
			}
		}
		else {
			printf("����Ƿ�������������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("��������\n");
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
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
	//// ����
	//int i = 0;
	//for (i = 0; i < row; i++) {
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
	//		return board[i][1];
	//	}
	//}
	//// ����
	//int j = 0;
	//for (j = 0; j < col; j++) {
	//	if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ') {
	//		return board[1][j];
	//	}
	//}
	//// �Խ���
	//if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
	//	return board[1][1];
	//}
	//if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
	//	return board[1][1];
	//}


	// �Ľ�
	int i = 0;
	int j = 0;
	int num1 = 0;
	int num2 = 0;
	//// ����
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
	//// ����
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

	// �ϲ����������
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
	// �Խ���
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

	// ƽ��
	int ret = IsFull(board, row, col);
	if (ret == 1) {
		return 'Q';
	}

	// ����
	return 'C';
}