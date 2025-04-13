#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/12 */

/* C���Գ��� */
/* ��������Ϸ */

#include "game.h"

void game() {
	// �洢���� - ��ά����
	char board[ROW][COL];
	// ��ʼ������
	InitBoard(board, ROW, COL);
	// ��ӡ����
	PrintBoard(board, ROW, COL);
	char ret = 0;
	while (1) {
		// �������
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		// �ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		// ��������
		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		// �ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("���Ӯ��\n");
		PrintBoard(board, ROW, COL);
	}
	if (ret == '#') {
		printf("����Ӯ��\n");
		PrintBoard(board, ROW, COL);
	}
	if (ret == 'Q') {
		printf("ƽ��\n");
		PrintBoard(board, ROW, COL);
	}
}

void Menu() {
	printf("*********************************\n");
	printf("**********  ��������Ϸ **********\n");
	printf("**********   1. Play   **********\n");
	printf("**********   0. Exit   **********\n");
	printf("*********************************\n");
}

int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		// ��ӡ�˵�
		Menu();
		// ѡ���Ƿ������Ϸ
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
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