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

//// 4.
//int main() {
//	unsigned char a = 200;
//	// 00000000000000000000000011001000
//	// �ض�
//	// 11001000
//	unsigned char b = 100;
//	// 00000000000000000000000001100100
//	// �ض�
//	// 01100100
//	unsigned char c = 0;
//	// ��������
//	// 00000000000000000000000011001000
//	// 00000000000000000000000001100100
//	// 00000000000000000000000100101100 - 300
//	c = a + b;
//	// �ض�
//	// 00101100
//	// ��������
//	// 00000000000000000000000000101100 - 44
//
//	printf("%d %d", a + b, c);// 300 44
//	return 0;
//}

////5.����Ļ�ϴ�ӡ�������
//int main() {
//	int rows = 10;// ��ӡ10��
//	int arr[10][10] = { 0 };// ���ڴ洢�����ֵ
//	int i = 0;
//	int j = 0;
//	//��ʼ����һ��Ԫ��ȫΪ1
//	for (i = 0; i < rows; i++) {
//			arr[i][0] = 1;
//	}
//	//����
//	for (i = 1; i < rows; i++) {
//		for (j = 1; j <= i; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//��ӡ
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < rows - i - 1; j++) {
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%-4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//// 6.������
//// �ĸ����������˹��ʣ�
//// A:������
//// B:��C
//// C:��D
//// D:C�ں�˵
//// ������һ������˵��
//int main() {
//	char murderer = 0;
//	for (murderer == 'A'; murderer <= 'D'; murderer++) {
//		if (((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D')) == 3) {
//			printf("%c", murderer);
//		}
//	}
//	return 0;
//}

//// 7. 5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//// Aѡ��˵:B�ڶ����ҵ���;
//// Bѡ��˵:�ҵڶ���E����;
//// Cѡ��˵:�ҵ�һ��D�ڶ�;
//// Dѡ��˵:C����ҵ���;
//// Eѡ��˵:�ҵ��ģ�A��һ; 
//// ����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							){
//							if (a * b * c * d * e == 120) {
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}