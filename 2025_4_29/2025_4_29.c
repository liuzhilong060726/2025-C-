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

//// 4.
//int main() {
//	unsigned char a = 200;
//	// 00000000000000000000000011001000
//	// 截断
//	// 11001000
//	unsigned char b = 100;
//	// 00000000000000000000000001100100
//	// 截断
//	// 01100100
//	unsigned char c = 0;
//	// 整型提升
//	// 00000000000000000000000011001000
//	// 00000000000000000000000001100100
//	// 00000000000000000000000100101100 - 300
//	c = a + b;
//	// 截断
//	// 00101100
//	// 整型提升
//	// 00000000000000000000000000101100 - 44
//
//	printf("%d %d", a + b, c);// 300 44
//	return 0;
//}

////5.在屏幕上打印杨辉三角
//int main() {
//	int rows = 10;// 打印10行
//	int arr[10][10] = { 0 };// 用于存储计算的值
//	int i = 0;
//	int j = 0;
//	//初始化第一列元素全为1
//	for (i = 0; i < rows; i++) {
//			arr[i][0] = 1;
//	}
//	//计算
//	for (i = 1; i < rows; i++) {
//		for (j = 1; j <= i; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//打印
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

//// 6.猜凶手
//// 四个犯罪嫌疑人供词：
//// A:不是我
//// B:是C
//// C:是D
//// D:C在胡说
//// 其中有一个人在说谎
//int main() {
//	char murderer = 0;
//	for (murderer == 'A'; murderer <= 'D'; murderer++) {
//		if (((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D')) == 3) {
//			printf("%c", murderer);
//		}
//	}
//	return 0;
//}

//// 7. 5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//// A选手说:B第二，我第三;
//// B选手说:我第二，E第四;
//// C选手说:我第一，D第二;
//// D选手说:C最后，我第三;
//// E选手说:我第四，A第一; 
//// 比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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