#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/29 */

/* C语言进阶 */
#include <stdio.h>

/* 练习 */
//// 1.打印菱形
//int main() {
//	// 输入
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	// 打印上半部分
//	for (i = 0; i < n; i++) {
//		// 打印空格
//		for (j = 0; j < n - i - 1; j++) {
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	// 打印下半部分
//	for (i = 0; i < n; i++) {
//		// 打印空格
//		for (j = 0; j < i + 1; j++) {
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < 2 * (n - i - 1) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//// 2.喝汽水：一瓶汽水一元，两个空瓶可以置换一瓶汽水
//int main() {
//	int monay = 0;
//	scanf("%d", &monay);
//	//int totle = monay;// 喝汽水数
//	//int empty = monay;// 空瓶数
//	//while (empty >= 2) {// 空瓶大于2可以置换
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

//// 3.交换一组数顺序，奇数在前，偶数在后
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", p[i]);
//	}
//}
//void change(int* p, int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {// 控制交换
//		while (left < right/*防止越界*/ && p[left] % 2 == 0) {// 是奇数交换
//			left++;
//		}
//		while (left < right && p[right] % 2 == 1) {// 是偶数交换
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
	// 截断
	// 11001000
	unsigned char b = 100;
	// 00000000000000000000000001100100
	// 截断
	// 01100100
	unsigned char c = 0;
	// 整型提升
	// 00000000000000000000000011001000
	// 00000000000000000000000001100100
	// 00000000000000000000000100101100 - 300
	c = a + b;
	// 截断
	// 00101100
	// 整型提升
	// 00000000000000000000000000101100 - 44

	printf("%d %d", a + b, c);// 300 44
	return 0;
}