#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/5/16 */

/* C���Խ��� */
#include <stdio.h>

/* ָ�������ϰ */
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
	printf("%d\n", strlen(&p));// ���ֵ
	printf("%d\n", strlen(&p + 1));// ���ֵ
	printf("%d\n", strlen(&p[0] + 1));// 5
	return 0;
}