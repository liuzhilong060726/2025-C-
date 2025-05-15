#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/5/15 */

/* C语言进阶 */
#include <stdio.h>

/* 函数指针数组 */
//// 简单计算器实现2
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mal(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void menu() {
//	printf("********************\n");
//	printf("*** 1.Add  2.Sub ***\n");
//	printf("*** 3.Mal  4.Div ***\n");
//	printf("***    0.Exit    ***\n");
//	printf("********************\n");
//}
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pf[5])(int, int) = { NULL,Add, Sub,Mal,Div };
//	do {
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//		if (input > 0 && input < 5) {
//			printf("请输入要计算的数字：>");
//			scanf("%d %d", &x, &y);
//			if (4 == input && 0 == y) {
//				printf("被除数不能为0！\n");
//			}
//			else {
//				int ret = (*pf[input])(x, y);
//				printf("%d\n", ret);
//			}
//		}
//		else if (0 == input) {
//			printf("退出程序\n");
//			break;
//		}
//		else {
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

// 整型数组
// int arr1[5];
// int (*p1)[5] = &arr1; // p1 - 指向整型数组的指针
// 
// 整形指针数组
// int* arr2[5];
// int* (*p2)[5] = %arr2; // p2 - 指向整形指针数组的指针
// 
// 函数指针数组
// int (*p)(int, int); // 函数指针
// int (*p[5])(int, int); // 函数指针数组
// int (*(*p3)[5])(int, int) = &p; // p3 - 指向函数指针数组的指针
//

/* 回调函数 */
//// 一个函数的参数是另一个函数的地址
//// 在特定条件下，通过这个函数调用实现另一个函数
//int Add(int x, int y) {
//	return x + y;
//}
//void test(int(*p)(int, int)) {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("%d", p(x, y));
//}
//int main() {
//	test(Add);// 回调函数
//	return 0;
//}
//// 简单计算器实现3
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mal(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void menu() {
//	printf("********************\n");
//	printf("*** 1.Add  2.Sub ***\n");
//	printf("*** 3.Mal  4.Div ***\n");
//	printf("***    0.Exit    ***\n");
//	printf("********************\n");
//}
//int colc(int (*pf)(int, int)) {
//	int x = 0;
//	int y = 0;
//	printf("请输入要计算的数字：>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main() {
//	int input = 0;
//	do {
//		menu();
//		printf("请输入：>");
//		scanf("%d", &input);
//		int ret = 0;
//		switch (input) {
//		case 1:
//			ret = colc(Add);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = colc(Sub);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = colc(Mal);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = colc(Div);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
// //qsort() - 快速排序函数
//void qsort(void* base,  // 接收数组首元素地址
//            size_t num, // 数组元素
//            size_t size,// 数组元素大小
//            int (*compar)(const void*, const void*)// 确认排序方式的关系函数
//            );
//void bobble_sort(int arr[], int sz) {// 冒泡排序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
// 
// 
//#include <stdlib.h>
//#include <string.h>
//void print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int sort_arr(const void* p1, const void* p2) {
//	return *(int*)p1 - *(int*)p2;
//}
//struct Stu {
//	char name[20];
//	int age;
//};
//int sort_name(const void* p1, const void* p2) {
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//int sort_age(const void* p1, const void* p2) {
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//// 用冒泡排序模拟实现qsort()功能 - 对任意类型数数据进行排序
//void Swap(char* p1, char* p2, int width) {
//	int i = 0;
//	for (int i = 0; i < width; i++) {
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//void bobble_sort(void* base,
//	int sz,
//	int width,
//	int (*cmp)(const void* p1, const void* p2)
//	) 
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (cmp((char*)base + j * width,(char*)base + (j + 1) * width) > 0) {
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//// 冒泡排序
//	//bobble_sort(arr, sz);
//	
//	//// 快速排序
//	//qsort(arr, sz, sizeof(arr[0]), sort_arr);
//	//print(arr, sz);
//	//struct Stu s[] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//	//sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), sort_name);
//	//qsort(s, sz, sizeof(s[0]), sort_age);
//
//	bobble_sort(arr, sz, sizeof(arr[0]), sort_arr);
//	print(arr, sz);
//	struct Stu s[] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//	sz = sizeof(s) / sizeof(s[0]);
//	bobble_sort(s, sz, sizeof(s[0]), sort_name);
//	bobble_sort(s, sz, sizeof(s[0]), sort_age);
//	return 0;
//}

#include <string.h>
int main() {
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));// 16
	//printf("%d\n", sizeof(a + 0));// 4/8
	//printf("%d\n", sizeof(*a));// 4
	//printf("%d\n", sizeof(a + 1));// 4/8
	//printf("%d\n", sizeof(a[1]));// 4
	//printf("%d\n", sizeof(&a));// 4/8
	//printf("%d\n", sizeof(*&a));// 16
	//printf("%d\n", sizeof(&a + 1));// 4/8
	//printf("%d\n", sizeof(&a[0]));// 4/8
	//printf("%d\n", sizeof(&a[0] + 1));// 4/8

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));// 6
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));// 随机值
	//printf("%d\n", strlen(arr + 0));// 随机值
	////printf("%d\n", strlen(*arr));// err - 错误传参
	////printf("%d\n", strlen(arr[1]));// err - 错误传参
	//printf("%d\n", strlen(&arr));// 随机值
	//printf("%d\n", strlen(&arr + 1));// 随机值-6
	//printf("%d\n", strlen(&arr[0]+1));// 随机值-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));// 7
	//printf("%d\n", sizeof(arr + 0)); // 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8

	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));// 6
	printf("%d\n", strlen(arr + 0));// 6
	//printf("%d\n", strlen(*arr));// err - 错误传参
	//printf("%d\n", strlen(arr[1]));// err - 错误传参
	printf("%d\n", strlen(&arr));// 6
	printf("%d\n", strlen(&arr + 1));// 12
	printf("%d\n", strlen(&arr[0]+1));// 5
	return 0;
}
