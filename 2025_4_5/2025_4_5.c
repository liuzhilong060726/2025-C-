#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/5 */

/* 初识C语言 */
#include <stdio.h>

/* 初识常见关键字 */
//// 1.C语言提供的，不能自己创造
//// 2.变量名不能是关键字
//
//// auto：自动的，每个局部变量都是auto修饰的
//// extern：声明外部符号
//// register：建议将值存放在寄存器当中
//// signed：有符号的
//// unsigned：无符号的
//// static：静态的
//// union：联合体（共用体）
//// typedef：类型重定义
//
//typedef unsigned int u_int;// 起别名
//void test() {
//	// int a = 1;
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	//unsigned int num1 = 10;
//	//u_int num2 = 20;// num1 和 num2 的类型相同
//
//	// static 静态的
//	// 1.static修饰局部变量：是局部变量具有全局变量的属性
//	// 2.static修饰全局变量：使得这个全局变量只能在自己的源文件内部被使用，使其只具有内部链接属性
//	// 3.static修饰函数：使得函数只能在只记得源文件内被使用，不能在其他文件中使用
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	
//	return 0;
//}


/* #define 定义常量和宏 */
//#define MAX 100// 定义常量
//#define ADD(x, y) ((x) + (y))// 定义宏（尽量使用括号）
//int main() {
//	printf("%d\n", MAX);
//
//	int a = 10;
//	int b = 20;
//	int c = 2 * ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


/* 初识指针 */
