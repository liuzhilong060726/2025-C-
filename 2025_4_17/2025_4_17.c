#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/17 */

/* C语言初阶 */
#include <stdio.h>

/* 调试技巧 */
// 开始调试
// f5
// 设置断点
// f9
// 逐语句调试
// f10
// 进入函数内部调试
// f11
// 调试窗口使用
// 一定是开始调试后才能打开调试窗口

// 调试案例
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