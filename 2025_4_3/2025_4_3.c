#define _CRT_SECURE_NO_WARNINGS

// ��ʼC����
// ��������

//#include <stdio.h>
//
//int mian()
//{
//	// �ַ�����
//	char ch = 'a';
//	// ����
//	int age = 20;
//	// ������
//	short = num = 20;
//	// ������ long��long long
//	// �����ȸ�����
//	float weight = 55.5;
//	// ˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//}

// �о������������ʹ�С
// sizeof()����Ĵ�С��һ��byte
// bit - ����λ - ���һ����������
// byte - �ֽ� = 8bit
// 1kb = 1024byte
#include <stdio.h>
int main() {
	printf("hehe\n");
	printf("%d\n", 100);			// ��ӡһ������ - %d
	printf("%d\n", sizeof(char));	// 1byte
	printf("%d\n", sizeof(int));	// 4
	printf("%d\n", sizeof(short));	// 2
	printf("%d\n", sizeof(long long));// 8
	printf("%d\n", sizeof(float));	// 4
	printf("%d\n", sizeof(double));	// 8

	return 0;
}
