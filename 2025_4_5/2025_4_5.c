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
int main() {
	//int a = 10;// a 在内存中要分配空间 - 4字节
	//printf("%p\n", &a);// %p 是专门用来打印地址的
	//int* pa = &a;// pa用来存放a的地址，其类型是int*，在C语言中pa叫做指针变量
	//// 存放指针的类型是由变量本身类型决定的
	//// *说明pa是指针变量
	//// int说明执行的对象是int类型的
	//char ch = 'a';
	//char* pc = &ch;

	//// * 解引用操作符
	//int a = 10;
	//int* pa = &a;
	//*pa = 20;// *pa就是通过pa里面存放的地址找到a
	//printf("%d\n", a);// 20

	// 指针大小 - 32位平台大小都是4个字节，64位平台是8个字节
	printf("%d\n", sizeof(int*));//4
	printf("%d\n", sizeof(short*));//4
	printf("%d\n", sizeof(long*));//4
	printf("%d\n", sizeof(long long*));//4
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(double*));//4
	printf("%d\n", sizeof(float*));//4

	return 0;
}