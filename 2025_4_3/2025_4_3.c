#define _CRT_SECURE_NO_WARNINGS

// 初始C语言
// 数据类型

//#include <stdio.h>
//
//int mian()
//{
//	// 字符类型
//	char ch = 'a';
//	// 整形
//	int age = 20;
//	// 短整型
//	short = num = 20;
//	// 长整型 long和long long
//	// 单精度浮点型
//	float weight = 55.5;
//	// 双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

// 研究各个数据类型大小
// sizeof()计算的大小是一个byte
// bit - 比特位 - 存放一个二进制数
// byte - 字节 = 8bit
// 1kb = 1024byte
#include <stdio.h>
int main() {
	printf("hehe\n");
	printf("%d\n", 100);			// 打印一个整数 - %d
	printf("%d\n", sizeof(char));	// 1byte
	printf("%d\n", sizeof(int));	// 4
	printf("%d\n", sizeof(short));	// 2
	printf("%d\n", sizeof(long long));// 8
	printf("%d\n", sizeof(float));	// 4
	printf("%d\n", sizeof(double));	// 8

	return 0;
}
