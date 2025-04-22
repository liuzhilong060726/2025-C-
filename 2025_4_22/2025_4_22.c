#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/22 */

/* C语言进阶 */
#include <stdio.h>

/* 数据的存储 */

/* 浮点型的存储 */
//// 浮点数和整数在内存中存储的方式不同
//// S(符号位)（1bit） + E(指数)（8bit） + M(小数位)（23bit）
//int main() {
//	int a = 9;
//	// 00000000000000000000000000001001
//	float* p = (float*)&a;
//	// 0 00000000 00000000000000000001001
//	// 0.00000000000000000001001 * 2^-126
//	printf("%d\n", a);// 9
//	printf("%f\n", *p);// 0.000000
//
//	*p = 9.0;
//	// 1001.0
//	// 1.001 * 2^3
//	// 0 10000010 00100000000000000000000
//	printf("%d\n", a);// 1091567616
//	printf("%f\n", *p);// 9.000000
//	return 0;
//}



///* 指针进阶 */
//
//// 字符指针 - 变量名代表首字母地址
//int main() {
//	char arr1[] = "hehe";
//	char arr2[] = "hehe";
//	char* str1 = "hehe";// 字符常量之开辟一次空间
//	char* str2 = "hehe";
//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", str1);
//	printf("%s\n", str2);*/
//
//	// 字符数组名不同，地址不同
//	if (arr1 == arr2) {
//		printf("yes\n");
//	}
//	else {
//		printf("no\n");
//	}
//	// 字符指针内容都存储字符常量，指针相同
//	if (str1 == str2) {
//		printf("yes\n");
//	}
//	else {
//		printf("no\n");
//	}
//
//
//	return 0;
//}