#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/5/19 */

/* C语言进阶 */
#include <stdio.h>

/* 练习 */
//// 1.杨氏矩阵
//// 有一个矩阵从左往右是递增的，从上往下是递增的
//// 请编写一个程序确定一个数字在这个矩阵中是否存在
//// 时间复杂度小于O(N)
////int find_num(int arr[3][3], int r, int c, int k) {
////	int x = 0;
////	int y = c - 1;
////	while (x < r && y >= 0) {
////		if (arr[x][y] < k) {
////			x++;
////		}
////		else if (arr[x][y] > k) {
////			y--;
////		}
////		else {
////			printf("下标是：%d %d\n", x, y);
////			return 1;
////		}
////	}
////	return 0;
////}
//int find_num(int arr[3][3], int* px, int* py, int k) {
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	// 遍历数组的方法时间复杂度等于O(N)不满足条件
//
//	// int ret = find_num(arr, 3, 3, k);// 找到了返回1，找不到返回0
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1) {
//		printf("找到了\n");
//		printf("下标是：%d %d", x, y);
//	}
//	else {
//		printf("找不到\n");
//	}
//
//	return 0;
//}

// 2.实现一个函数，可以让字符串左旋旋转k个字符
// 例：ABCDEF ->旋转2个字符后：ACDEFAB
//#include <string.h>
////方法一
////void string_rotate(char* str, int k) {
////	int i = 0;
////	int n = strlen(str);
////	// 进行k次
////	for (i = 0; i < k; i++) {
////		// 1.取出第一个字符
////		char tmp = *str;
////		// 2.将后面字符往前挪
////		int j = 0;
////		for (j = 0; j < n - 1; j++) {
////			*(str + j) = *(str + j + 1);
////		}
////		// 3.将第一个字符放到最后的位置
////		*(str + n - 1) = tmp;
////	}
////	
////}
//// 方法二
//#include <assert.h>
//void reverse(char* left, char* right) {
//	assert(left);
//	assert(right);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_rotate(char* str, int k) {
//	int n = strlen(str);
//	// 将前k个字符逆序
//	reverse(str, str + k - 1);
//	// 将后面字符逆序
//	reverse(str + k, str + n - 1);
//	// 将整个字符串逆序
//	reverse(str, str + n - 1);
//}
//int main() {
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}

// 3.比较一个字符串是不是有另一个字符串逆序而来
// 例：BCDEFA 是由 ABCDEF 旋转一次得来的
#include <string.h>
//// 方法一：穷举法
//int is_rotate(char* str1, char* str2) {
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++) {
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < n - 1; j++) {
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = tmp;
//		if (strcmp(str1, str2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
// 方法二
int is_rotate(char* str1, char* str2) {
	// 判断字符串长度是否相等
	if (strlen(str1) != strlen(str2)) {
		return 0;
	}
	// 增长数组
	int len = strlen(str1);
	strncat(str1, str1, len);// 三个参数：被扩增的的字符串，用于扩增的字符串，需要扩增的长度
	// 在增长后的字符串中寻找str2
	char* ret = strstr(str1, str2);// 如果找到返回第一个字符相同的地址，如果没找到返回NULL
	return ret != NULL;// 如果是空指针表示没找到返回0，否则返回1
}
int main() {
	char arr1[20] = "ABCDEF";
	char arr2[] = "CDEFAB";
	int ret = is_rotate(arr1, arr2);
	if (ret == 1) {
		printf("ok");
	}
	else {
		printf("no");
	}
	return 0;
}