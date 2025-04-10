#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/10 */

/* C语言初阶 */
#include <stdio.h>

/* 练习 */
//// 1.求1-100之间9的个数
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (9 == i % 10) {// 计算个位上9的个数
//			count++;
//		}
//		if (9 == i / 10) {// 计算十位上9的个数
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//// 2.计算1-1/2+1/3-...-1/100
//int main() {
//	int n = 100;
//	int i = 0;
//	double sum = 0;
//	int found = 1;// 用于交换正负号
//	for (i = 1; i <= n; i++) {
//		sum += found * 1.0 / i;// 确保计算结果是浮点数
//		found = -found;// 交换正负号
//	}
//	printf("%lf", sum);
//	return 0;
//}

//// 3.求10个整数中最大值
//int main() {
//	int arr[10] = { 12,23,34,65,3,76,33,19,24,46 };
//	int max = 0;// 假设第一个数最大
//	int i = 0;
//	for (i = 1; i < 10; i++) {
//		if (arr[i] > arr[max]) {// 如果有比它大的数就交换下标
//			max = i;
//		}
//	}
//	printf("%d", arr[max]);
//	return 0;
//}

//// 4.打印9*9乘法表
//int main() {
//	int i = 0;
//	int j = 0;
//	// 控制行数
//	for (i = 1; i <= 9; i++) {// 打印到9结束
//		// 控制列数
//		for (j = 1; j <= i; j++) {// 第一行打印一列，后续依次加一
//			printf("%d*%d=%-5d", j, i, i * j);// %-5d是打印的数字占五个位置，并靠左
//		}
//		printf("\n");// 打印完一组数换行
//	}
//	return 0;
//}

// 4.实现一个函数，将字符串逆序
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