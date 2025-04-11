#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/11 */

/* C语言初阶 */
#include <stdio.h>

/* 练习 */

//// 1.定义一个函数，实现字符串逆序（递归法）
//int my_strlen(char* str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + my_strlen(str + 1);
//	}
//}
//void Reverse_order(char* str) {
//	int len = my_strlen(str);
//	if (len > 0) {
//		char tmp = *str;
//		*str = *(str + len - 1);
//		*(str + len - 1) = '\0';
//		Reverse_order(str + 1);
//		*(str + len - 1) = tmp;
//	}
//}
//int main() {
//	char arr[] = "abcdef";
//	Reverse_order(arr);
//	printf("%s", arr);
//	return 0;
//}

//// 2.递归实现一个数每一位和
//int DigitSum(int n) {
//	if (n < 9) {
//		return n;
//	}
//	else {
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}

//// 3.编写一个函数，求n的k（k为整数）次方（递归实现）
//double my_pow(int n, int k) {
//	if (0 == k) {
//		return 1;
//	}
//	if (k > 0) {
//		return n * my_pow(n, k - 1);
//	}
//	if (k < 0) {
//		return 1.0 / my_pow(n, -k);
//	}
//}
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = my_pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}



/* 数组 */
// 一组相同类型元素的集合

/* 一维数组 */
//int main() {
//	//// 创建
//	//int arr[5];
//	//char ch[10];
//	
//	//// 初始化
//	//int arr1[] = { 1,2,3 };// 不给定数组大小，根据存放的元素个数决定数组大小
//	//int arr2[10] = { 0 };// 将所有元素初始化成0
//	//int arr3[5] = { 1,2,3,4,5 };// 完全初始化
//	//int arr4[5] = { 1,2 };// 不完全初始化，剩余部分默认放0
//
//	// 特殊情况
//	char ch1[] = "abc";// 数组里面放的是abc和\0
//	char ch2[] = { 'a', 'b', 'c' };// 数组里面放的是abc
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);// 由于缺少\0，打印结果不确定
//
//	return 0;
//}

/* 二维数组 */
//int main() {
//	//// 创建
//	//int arr[3][4];
//	//char ch[4][5];
//
//	//// 初始化
//	//int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };// 完全初始化
//	//int arr2[3][4] = { 1,2,3,4,5 };// 不完全初始化，剩余默认是0
//	//int arr3[3][4] = { {1,2},{3,4},{5,6} };// 数组也可以通过这种方式初始化
//	//int arr4[][4] = { {1,3},{3,4},{5,6} };// 数组的行可以省略，但列不能省略
//
//	//// 使用
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int i = 0;
//	//int j = 0;
//	//// 打印数组中的元素
//	//for (i = 0; i < 3; i++) {
//	//	for (j = 0; j < 4; j++) {
//	//		printf("%d", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	// 二维数组在内存中存放
//	// 二维数组中所有元素都是连续存放的
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	// 打印数组中的元素地址
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%p\n", &arr[i][j]);
//		}
//	}
//	// 可以通过首元素的地址找到整个数组
//	int* p = &arr;
//	for (i = 0; i < 12; i++) {
//		printf("%d", *p);
//		if (0 == (i + 1) % 4) {
//			printf("\n");
//		}
//		p++;
//	}
//
//	return 0;
//}


/* 数组作为函数参数 */
//// 冒泡排序
//void bubblo_sort(int arr[], int sz) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++) {
//		for (j = 0; j < sz - 1 - i; j++) {
//			// 判断是否进行交换
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	// 计算数组大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 排成升序 - 冒泡排序
//	bubblo_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//// 什么是数组名？
//// 数组名数组首元素地址
//// 但是有两个例外：
//// 1.sizeof(数组名) - 表示整个数组的地址，计算结果是整个数组所占内存空间大小
//// 2.&(数组名) - 表示去除整个数组的地址
//int main() {
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);//40
//
//	// 首元素的地址和数组的地址，值是相同的，但表达的意思不同
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	// 比如给地址各加1
//	printf("%p\n", arr + 1);// 它跳转到下一个元素的地址
//	printf("%p\n", &arr + 1);// 它跳出整个数组
//	return 0;
//}