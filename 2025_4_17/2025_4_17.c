#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/17 */

/* C���Գ��� */
#include <stdio.h>

/* ���Լ��� */
// ��ʼ����
// f5
// ���öϵ�
// f9
// ��������
// f10
// ���뺯���ڲ�����
// f11
// ���Դ���ʹ��
// һ���ǿ�ʼ���Ժ���ܴ򿪵��Դ���

// ���԰���
// 1.
int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}