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