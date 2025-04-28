#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/23 */

/* C语言进阶 */
#include <stdio.h>

/* 指针进阶 */

/* 指针数组 */
//// 数组 - 数组中存放的是指针（地址）
//int main() {
//	//int* arr[3];// 存放整形指针的数组
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


/* 数组指针 */
//// 是指向数组的指针
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
//	int arr[3];// 数组
//	int* arr[3];// 指针数组
//	int (*arr)[3];// 数组指针
//	int (*arr[4])[3];// 存放4个数组指针，每个指针指向元素个数3的数组
//
//	return 0;
//}


/* 数组传参/指针传参 */
////void test1(int arr[]) {// 正确
////	
////}
////void test1(int arr[3]) {// 正确
////
////}
//void test1(int* p){// 正确
//
//}
////void test2(int* arr[]) {// 正确
////
////}
//void test2(int** p) {// 正确
//
//}
//int main() {
//	int arr[3];
//	int* arr2[3];
//	test1(arr);
//	test2(arr2);
//	return 0;
//}

////void test(int arr[3][4]) {// 正确
////
////}
////void test(int arr[][]) {// 错误 - 不能省略列
////
////}
////void test(int arr[][4]) {// 正确
////
////}
////void test(int* arr) {// 错误
////
////}
////void test(int* arr[]) {// 错误
////
////}
////void test(int* arr[4]) {// 错误
////
////}
////void test(int** arr) {// 错误
////
////}
//void test(int (*arr)[4]) {// 正确
//
//}
//int main() {
//	int arr[3][4];
//	test(arr);
//	return 0;
//}



/* 练习 */
//// 1.
//int i;// 全局变量，不初始化默认是0
//int main() {
//	i--;// -1
//	// sizeof的计算结果是unsigned int类型
//	// i是int类型，计算式要提升至unsigned int类型
//	// -1将变成一个很大的数，比4大
//	if (i > sizeof(i)) {
//		printf(">\n");// 输出
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}

//// 2.计算2 + 22 + 222 + ...
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

//// 3.计算水仙花数
//#include <math.h>
//int main() {
//	int start = 1;
//	for (start = 1; start <= 10000; start++) {
//		int n = 1;
//		// 计算位数
//		int tmp = start;
//		while (tmp / 10) {
//			n++;
//			tmp /= 10;
//		}
//		//计算各位幂和
//		int sum = 0;
//		tmp = start;
//		while (tmp) {
//			int ret = 0;
//			ret = pow(tmp % 10, n);
//			sum += ret;
//			tmp /= 10;
//		}
//		// 判断
//		if (sum == start) {
//			printf("%d ", start);
//		}
//	}
//	return 0;
//}

//// 4.字符串逆序
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

