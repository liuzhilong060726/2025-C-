#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/13 */

/* C���Գ�ʶ */
#include "game.h"

void Menu() {
	printf("****************************\n");
	printf("*********** 1.Play *********\n");
	printf("*********** 0.Exit *********\n");
	printf("****************************\n");
}
void game() {
	// ������������
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	// ��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	// ��ӡ����
	PrintBoard(show, ROW, COL);
	// ������
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);
	// �Ų���
	FindMine(mine, show, ROW, COL);
}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		Menu();
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