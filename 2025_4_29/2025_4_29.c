#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/29 */

/* C���Խ��� */
#include <stdio.h>

/* ��ϰ */
//// 1.��ӡ����
//int main() {
//	// ����
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	// ��ӡ�ϰ벿��
//	for (i = 0; i < n; i++) {
//		// ��ӡ�ո�
//		for (j = 0; j < n - i - 1; j++) {
//			printf(" ");
//		}
//		// ��ӡ*
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	// ��ӡ�°벿��
//	for (i = 0; i < n; i++) {
//		// ��ӡ�ո�
//		for (j = 0; j < i + 1; j++) {
//			printf(" ");
//		}
//		// ��ӡ*
//		for (j = 0; j < 2 * (n - i - 1) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//// 2.����ˮ��һƿ��ˮһԪ��������ƿ�����û�һƿ��ˮ
//int main() {
//	int monay = 0;
//	scanf("%d", &monay);
//	//int totle = monay;// ����ˮ��
//	//int empty = monay;// ��ƿ��
//	//while (empty >= 2) {// ��ƿ����2�����û�
//	//	totle += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//
//	int totle = 0;
//	if (monay > 0)
//		totle = 2 * monay - 1;
//	printf("%d", totle);
//	return 0;
//}

//// 3.����һ����˳��������ǰ��ż���ں�
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", p[i]);
//	}
//}
//void change(int* p, int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {// ���ƽ���
//		while (left < right/*��ֹԽ��*/ && p[left] % 2 == 0) {// ����������
//			left++;
//		}
//		while (left < right && p[right] % 2 == 1) {// ��ż������
//			right--;
//		}
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr, sz);
//	print(arr, sz);
//	return 0;
//}

// 4.
int main() {
	unsigned char a = 200;
	// 00000000000000000000000011001000
	// �ض�
	// 11001000
	unsigned char b = 100;
	// 00000000000000000000000001100100
	// �ض�
	// 01100100
	unsigned char c = 0;
	// ��������
	// 00000000000000000000000011001000
	// 00000000000000000000000001100100
	// 00000000000000000000000100101100 - 300
	c = a + b;
	// �ض�
	// 00101100
	// ��������
	// 00000000000000000000000000101100 - 44

	printf("%d %d", a + b, c);// 300 44
	return 0;
}