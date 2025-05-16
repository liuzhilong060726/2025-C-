#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/5/16 */

/* C语言进阶 */
#include <stdio.h>

/* 指针进阶练习 */
#include <string.h>
int main() {
	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));// 4/8
	//printf("%d\n", sizeof(p + 1));// 4/8
	//printf("%d\n", sizeof(*p));// 1
	//printf("%d\n", sizeof(p[0]));// 1
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p + 1));// 4/8
	//printf("%d\n", sizeof(&p[0] + 1));// 4/8

	char* p = "abcdef";
	printf("%d\n", strlen(p));// 6
	printf("%d\n", strlen(p + 1));// 5
	//printf("%d\n", strlen(*p));// err
	//printf("%d\n", strlen(p[0]));// err
	printf("%d\n", strlen(&p));// 随机值
	printf("%d\n", strlen(&p + 1));// 随机值
	printf("%d\n", strlen(&p[0] + 1));// 5
	return 0;
}