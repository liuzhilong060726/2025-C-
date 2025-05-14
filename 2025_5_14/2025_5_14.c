#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/5/14 */

/* C语言进阶 */
#include <stdio.h>

/* 指针进阶 */

/* 一级指针传参 */
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d", *(p + i));
//	}
//}
//void test(char* p) { // 当一个函数参数为一级指针的时候能接收什么？
//
//}
//int main() {
//	int arr[] = { 1,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	char ch = 'a';
//	test(&ch);
//	char* p = &ch;
//	test(p);
//	return 0;
//}

/* 二级指针传参 */
//void test(int** p) {// 当一个函数参数为二级指针的时候能接受什么？
//
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);// 传一级指针变量的地址
//	int* arr[10];
//	test(arr);// 传一个存放一级指针的数组
//
//	return 0;
//}

/*函数指针*/
//// 指向函数的指针 - 存放函数地址的指针
//int Add(int x, int y) {
//	return x + y;
//}
//void test(char* p) {
//
//}
//int main() {
//	//int ret = Add(3, 4);
//
//	//函数指针
//	int (*f)(int, int) = &Add;// &Add == Add
//	// int (*f)(int, int) = Add;
//	
//	int ret = (*f)(3, 4);// 解不解引用效果都一样
//	// int ret = f(3, 4);
//
//	printf("%d", ret);
//
//	void (*t)(char*) = test;
//	return 0;
//}

// 两个表达式的判断
// (*(void(*)())0)();
// (void(*)())0 -> 将0强制转换成函数指针类型
// *(void(*)())0 -> 对0地址进行解引用
// (*(void(*)())0)() -> 调用0地址处的函数
// 
// void(*signal(int ,void(*)(int)))(int);
// signal(int ,void(*)(int)) -> 一个函数两个参数分别是int类型，函数指针类型
// void(*signal(int ,void(*)(int)))(int) -> 对函数signal进行声明，其返回类型是void(*)(int)
// 也可以对其进行简化
// typedef void(*pfun_t)(int);// 将void(*)(int)通过typedef重命名为pfun_t
// pfun_t signal(int, void(*)(int));


/* 函数指针数组 */
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int main() {
//	// 函数指针
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	// 函数指针数组
//	int (*pfArr[2])(int, int) = { Add, Sub };
//	return 0;
//}

//// 函数指针数组的简单应用 - 模拟简单计算器
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void menu() {
//	printf("**********************\n");
//	printf("*** 1.Add    2.Sub ***\n");
//	printf("*** 3.Mul    4.Div ***\n");
//	printf("***     0.Exit     ***\n");
//	printf("**********************\n");
//}
//// 普通版
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		int ret = 0;
//		switch (input) {
//		case 1:
//			printf("请输入要计算的数：>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入要计算的数：>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入要计算的数：>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入要计算的数：>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}