#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/10 */

/* C���Գ��� */
#include <stdio.h>

/* ��ϰ */
//// 1.��1-100֮��9�ĸ���
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (9 == i % 10) {// �����λ��9�ĸ���
//			count++;
//		}
//		if (9 == i / 10) {// ����ʮλ��9�ĸ���
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//// 2.����1-1/2+1/3-...-1/100
//int main() {
//	int n = 100;
//	int i = 0;
//	double sum = 0;
//	int found = 1;// ���ڽ���������
//	for (i = 1; i <= n; i++) {
//		sum += found * 1.0 / i;// ȷ���������Ǹ�����
//		found = -found;// ����������
//	}
//	printf("%lf", sum);
//	return 0;
//}

//// 3.��10�����������ֵ
//int main() {
//	int arr[10] = { 12,23,34,65,3,76,33,19,24,46 };
//	int max = 0;// �����һ�������
//	int i = 0;
//	for (i = 1; i < 10; i++) {
//		if (arr[i] > arr[max]) {// ����б���������ͽ����±�
//			max = i;
//		}
//	}
//	printf("%d", arr[max]);
//	return 0;
//}

//// 4.��ӡ9*9�˷���
//int main() {
//	int i = 0;
//	int j = 0;
//	// ��������
//	for (i = 1; i <= 9; i++) {// ��ӡ��9����
//		// ��������
//		for (j = 1; j <= i; j++) {// ��һ�д�ӡһ�У��������μ�һ
//			printf("%d*%d=%-5d", j, i, i * j);// %-5d�Ǵ�ӡ������ռ���λ�ã�������
//		}
//		printf("\n");// ��ӡ��һ��������
//	}
//	return 0;
//}

// 4.ʵ��һ�����������ַ�������
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
void Reverse_order(char* str) {
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right) {
		char tmp = *(str + left);
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;
	}
}
int main() {
	char arr[] = "abcdef";
	Reverse_order(arr);
	printf("%s", arr);
	return 0;
}