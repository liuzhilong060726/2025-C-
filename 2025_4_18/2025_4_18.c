#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/18 */

/* C语言初阶 */
#include <stdio.h>

/**/
////// 模拟实现strcpy
////void my_strcpy(char* dest, char* src) {
////	// 放入'\0'之前的字符
////	while (*src != '\0') {
////		//*dest = *src;
////		//// 调整到下一个地址
////		//dest++;
////		//src++;
////		*dest++ = *src++;
////	}
////	// 放入'\0'
////	*dest = *src;
////}
//#include <assert.h>
//void my_strcpy(char* dest, char* src) {// 化简代码
//	assert(dest != NULL);// 断言
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++) {// 当遇到'\0'时，表达式的值为0结束循环
//		;
//	}
//}
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

/* const用法 */
// const修饰常变量，不可被修改
// const在 * 前指针可以修改，解引用后不可被修改
// const在 * 后解引用后可修改，指针不可被修改
//int main() {
//	//int a = 10;
//	//int b = 20;
//	//const int* p = &a;
//	////*p = 20;
//	//p = &b;
//	//printf("%d", *p);
//
//	//const int a = 10;
//	////a = 10;
//	//int b = 20;
//	//int* const p = &a;
//	//*p = 20;
//	////p = &b;
//	//printf("%d", *p);
//
//	int a = 10;
//	int b = 20;
//	const int* const p = &a;
//	//*p = 20;
//	//p = &b;
//	printf("%d", *p);
//
//	return 0;
//}
//#include <assert.h>
//void my_strcpy(char* dest, const char* src) {// arr2传到函数内部后不可被修改，即src不可被修改
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++) {
//		;
//	}
//}
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//// 模拟实现strlen函数
////int my_strlen(const char* str) {
////	int count = 0;
////	while (*str++) {
////		count++;
////	}
////	return count;
////}
//size_t my_strlen(const char* str) {
//	char* ret = str;
//	while (*str++);
//	return (str - ret - 1);
//}
//int main() {
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



/* 常见错误类型 */
//// 编译错误
//// 1.语法错误 - 检查缺失的;、)、}等符号
//// 2.类型不匹配
//// 显式类型转换：int a = (int)"hello";（但逻辑可能仍有问题）,使用正确的类型
//// 3.未生明标识符
//// 检查变量/函数是否正确定义，确认头文件已包含
//// 4.宏展开错误 - 宏参数加括号
//#define SQUARE(x) x*x
//int main() {
//	//1.
//	printf("Hello")  // 缺少分号
//	//2.
//	int a = "hello";  // 字符串赋给int
//	//3.
//	printf("%d", x);  // x未定义
//	//4.
//	int a = SQUARE(2 + 3); // 展开为2+3*2+3=11（非预期的25）b
//
//	return 0;
//}

//// 链接错误
//// 1.未定义的引用 - 检查函数声明是否一致（头文件中的声明与实现）
//// 2.缺少定义
//// 在头文件中用extern声明：extern int var;
//// 使用static限制作用域：static int var = 10;
////
//// math.c
//int square(int x) { return x * x; }
//// main.c
//int main() {
//	//1.
//	printf("%d", square(2));  // 编译成功，链接失败
//	//2.
//	// a.c
//	int var = 10;
//	// b.c
//	int var = 20;  // 链接时报重复定义
//  
//  return 0;
//}

// 运行时错误
// 1.段错误 - 检查指针是否有效
// 2.内存泄漏 - 遵循谁分配谁释放原则
// 3.数组越界 - 检查循环边界条件
// 4.除零错误 - 检查除数是否为0
void func() {
	int* p = malloc(100);
	// 忘记free(p)
}
int main() {
	//1.
	int* p = NULL;
	*p = 10;  // 访问空指针
	//2.
	func();
	//3.
	int arr[3] = { 1,2,3 };
	printf("%d", arr[5]);  // 越界访问
	//4.
	int a = 10 / 0;  // 浮点除零可能不崩溃但结果是inf

	return 0;
}