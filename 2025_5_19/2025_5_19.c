#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/5/19 */

/* C���Խ��� */
#include <stdio.h>

/* ��ϰ */
//// 1.���Ͼ���
//// ��һ��������������ǵ����ģ����������ǵ�����
//// ���дһ������ȷ��һ������������������Ƿ����
//// ʱ�临�Ӷ�С��O(N)
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
////			printf("�±��ǣ�%d %d\n", x, y);
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
//	// ��������ķ���ʱ�临�Ӷȵ���O(N)����������
//
//	// int ret = find_num(arr, 3, 3, k);// �ҵ��˷���1���Ҳ�������0
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1) {
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d", x, y);
//	}
//	else {
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

// 2.ʵ��һ���������������ַ���������תk���ַ�
// ����ABCDEF ->��ת2���ַ���ACDEFAB
//#include <string.h>
////����һ
////void string_rotate(char* str, int k) {
////	int i = 0;
////	int n = strlen(str);
////	// ����k��
////	for (i = 0; i < k; i++) {
////		// 1.ȡ����һ���ַ�
////		char tmp = *str;
////		// 2.�������ַ���ǰŲ
////		int j = 0;
////		for (j = 0; j < n - 1; j++) {
////			*(str + j) = *(str + j + 1);
////		}
////		// 3.����һ���ַ��ŵ�����λ��
////		*(str + n - 1) = tmp;
////	}
////	
////}
//// ������
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
//	// ��ǰk���ַ�����
//	reverse(str, str + k - 1);
//	// �������ַ�����
//	reverse(str + k, str + n - 1);
//	// �������ַ�������
//	reverse(str, str + n - 1);
//}
//int main() {
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}

// 3.�Ƚ�һ���ַ����ǲ�������һ���ַ����������
// ����BCDEFA ���� ABCDEF ��תһ�ε�����
#include <string.h>
//// ����һ����ٷ�
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
// ������
int is_rotate(char* str1, char* str2) {
	// �ж��ַ��������Ƿ����
	if (strlen(str1) != strlen(str2)) {
		return 0;
	}
	// ��������
	int len = strlen(str1);
	strncat(str1, str1, len);// �����������������ĵ��ַ����������������ַ�������Ҫ�����ĳ���
	// ����������ַ�����Ѱ��str2
	char* ret = strstr(str1, str2);// ����ҵ����ص�һ���ַ���ͬ�ĵ�ַ�����û�ҵ�����NULL
	return ret != NULL;// ����ǿ�ָ���ʾû�ҵ�����0�����򷵻�1
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