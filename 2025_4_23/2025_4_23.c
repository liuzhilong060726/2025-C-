#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/23 */

/* C���Խ��� */
#include <stdio.h>

/* ָ����� */

/* ָ������ */
//// ���� - �����д�ŵ���ָ�루��ַ��
//int main() {
//	//int* arr[3];// �������ָ�������
//
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			// printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


/* ����ָ�� */
//// ��ָ�������ָ��
////void print(int arr[3][4], int r, int c) {
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < r; i++) {
////		for (j = 0; j < c; j++) {
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////}
//void print(int (*p)[4], int r, int c) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main() {
//	//int arr[10] = { 1,2,3,4 };
//	//int (*parr)[10] = &arr;
//	//double* b[5];
//	//double* (*b)[5] = &b;
//
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	print(arr, 3, 4);
//
//	int arr[3];// ����
//	int* arr[3];// ָ������
//	int (*arr)[3];// ����ָ��
//	int (*arr[4])[3];// ���4������ָ�룬ÿ��ָ��ָ��Ԫ�ظ���3������
//
//	return 0;
//}


/* ���鴫��/ָ�봫�� */
////void test1(int arr[]) {// ��ȷ
////	
////}
////void test1(int arr[3]) {// ��ȷ
////
////}
//void test1(int* p){// ��ȷ
//
//}
////void test2(int* arr[]) {// ��ȷ
////
////}
//void test2(int** p) {// ��ȷ
//
//}
//int main() {
//	int arr[3];
//	int* arr2[3];
//	test1(arr);
//	test2(arr2);
//	return 0;
//}

////void test(int arr[3][4]) {// ��ȷ
////
////}
////void test(int arr[][]) {// ���� - ����ʡ����
////
////}
////void test(int arr[][4]) {// ��ȷ
////
////}
////void test(int* arr) {// ����
////
////}
////void test(int* arr[]) {// ����
////
////}
////void test(int* arr[4]) {// ����
////
////}
////void test(int** arr) {// ����
////
////}
//void test(int (*arr)[4]) {// ��ȷ
//
//}
//int main() {
//	int arr[3][4];
//	test(arr);
//	return 0;
//}



/* ��ϰ */
//// 1.
//int i;// ȫ�ֱ���������ʼ��Ĭ����0
//int main() {
//	i--;// -1
//	// sizeof�ļ�������unsigned int����
//	// i��int���ͣ�����ʽҪ������unsigned int����
//	// -1�����һ���ܴ��������4��
//	if (i > sizeof(i)) {
//		printf(">\n");// ���
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}

//// 2.����2 + 22 + 222 + ...
//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int ret = 0;
//	int sum = 0;
//	while (n--) {
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//// 3.����ˮ�ɻ���
//#include <math.h>
//int main() {
//	int start = 1;
//	for (start = 1; start <= 10000; start++) {
//		int n = 1;
//		// ����λ��
//		int tmp = start;
//		while (tmp / 10) {
//			n++;
//			tmp /= 10;
//		}
//		//�����λ�ݺ�
//		int sum = 0;
//		tmp = start;
//		while (tmp) {
//			int ret = 0;
//			ret = pow(tmp % 10, n);
//			sum += ret;
//			tmp /= 10;
//		}
//		// �ж�
//		if (sum == start) {
//			printf("%d ", start);
//		}
//	}
//	return 0;
//}

//// 4.�ַ�������
//#include <assert.h>
//#include <string.h>
//void reverse(char* str) {
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

