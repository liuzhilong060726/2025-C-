#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/11 */

/* C���Գ��� */
#include <stdio.h>

/* ��ϰ */

//// 1.����һ��������ʵ���ַ������򣨵ݹ鷨��
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + my_strlen(str + 1);
//	}
//}
//void Reverse_order(char* str) {
//	int len = my_strlen(str);
//	if (len > 0) {
//		char tmp = *str;
//		*str = *(str + len - 1);
//		*(str + len - 1) = '\0';
//		Reverse_order(str + 1);
//		*(str + len - 1) = tmp;
//	}
//}
//int main() {
//	char arr[] = "abcdef";
//	Reverse_order(arr);
//	printf("%s", arr);
//	return 0;
//}

//// 2.�ݹ�ʵ��һ����ÿһλ��
//int DigitSum(int n) {
//	if (n < 9) {
//		return n;
//	}
//	else {
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}

//// 3.��дһ����������n��k��kΪ�������η����ݹ�ʵ�֣�
//double my_pow(int n, int k) {
//	if (0 == k) {
//		return 1;
//	}
//	if (k > 0) {
//		return n * my_pow(n, k - 1);
//	}
//	if (k < 0) {
//		return 1.0 / my_pow(n, -k);
//	}
//}
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = my_pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}



/* ���� */
// һ����ͬ����Ԫ�صļ���

/* һά���� */
//int main() {
//	//// ����
//	//int arr[5];
//	//char ch[10];
//	
//	//// ��ʼ��
//	//int arr1[] = { 1,2,3 };// �����������С�����ݴ�ŵ�Ԫ�ظ������������С
//	//int arr2[10] = { 0 };// ������Ԫ�س�ʼ����0
//	//int arr3[5] = { 1,2,3,4,5 };// ��ȫ��ʼ��
//	//int arr4[5] = { 1,2 };// ����ȫ��ʼ����ʣ�ಿ��Ĭ�Ϸ�0
//
//	// �������
//	char ch1[] = "abc";// ��������ŵ���abc��\0
//	char ch2[] = { 'a', 'b', 'c' };// ��������ŵ���abc
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);// ����ȱ��\0����ӡ�����ȷ��
//
//	return 0;
//}

/* ��ά���� */
//int main() {
//	//// ����
//	//int arr[3][4];
//	//char ch[4][5];
//
//	//// ��ʼ��
//	//int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };// ��ȫ��ʼ��
//	//int arr2[3][4] = { 1,2,3,4,5 };// ����ȫ��ʼ����ʣ��Ĭ����0
//	//int arr3[3][4] = { {1,2},{3,4},{5,6} };// ����Ҳ����ͨ�����ַ�ʽ��ʼ��
//	//int arr4[][4] = { {1,3},{3,4},{5,6} };// ������п���ʡ�ԣ����в���ʡ��
//
//	//// ʹ��
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int i = 0;
//	//int j = 0;
//	//// ��ӡ�����е�Ԫ��
//	//for (i = 0; i < 3; i++) {
//	//	for (j = 0; j < 4; j++) {
//	//		printf("%d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	// ��ά�������ڴ��д��
//	// ��ά����������Ԫ�ض���������ŵ�
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	// ��ӡ�����е�Ԫ�ص�ַ
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%p\n", &arr[i][j]);
//		}
//	}
//	// ����ͨ����Ԫ�صĵ�ַ�ҵ���������
//	int* p = &arr;
//	for (i = 0; i < 12; i++) {
//		printf("%d", *p);
//		if (0 == (i + 1) % 4) {
//			printf("\n");
//		}
//		p++;
//	}
//
//	return 0;
//}


/* ������Ϊ�������� */
//// ð������
//void bubblo_sort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++) {
//		for (j = 0; j < sz - 1 - i; j++) {
//			// �ж��Ƿ���н���
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	// ���������С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// �ų����� - ð������
//	bubblo_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//// ʲô����������
//// ������������Ԫ�ص�ַ
//// �������������⣺
//// 1.sizeof(������) - ��ʾ��������ĵ�ַ��������������������ռ�ڴ�ռ��С
//// 2.&(������) - ��ʾȥ����������ĵ�ַ
//int main() {
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);//40
//
//	// ��Ԫ�صĵ�ַ������ĵ�ַ��ֵ����ͬ�ģ���������˼��ͬ
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	// �������ַ����1
//	printf("%p\n", arr + 1);// ����ת����һ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr + 1);// ��������������
//	return 0;
//}