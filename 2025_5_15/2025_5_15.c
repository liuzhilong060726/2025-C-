#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/5/15 */

/* C���Խ��� */
#include <stdio.h>

/* ����ָ������ */
//// �򵥼�����ʵ��2
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
//		printf("�����룺>");
//		scanf("%d", &input);
//		if (input > 0 && input < 5) {
//			printf("������Ҫ��������֣�>");
//			scanf("%d %d", &x, &y);
//			if (4 == input && 0 == y) {
//				printf("����������Ϊ0��\n");
//			}
//			else {
//				int ret = (*pf[input])(x, y);
//				printf("%d\n", ret);
//			}
//		}
//		else if (0 == input) {
//			printf("�˳�����\n");
//			break;
//		}
//		else {
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

// ��������
// int arr1[5];
// int (*p1)[5] = &arr1; // p1 - ָ�����������ָ��
// 
// ����ָ������
// int* arr2[5];
// int* (*p2)[5] = %arr2; // p2 - ָ������ָ�������ָ��
// 
// ����ָ������
// int (*p)(int, int); // ����ָ��
// int (*p[5])(int, int); // ����ָ������
// int (*(*p3)[5])(int, int) = &p; // p3 - ָ����ָ�������ָ��
//

/* �ص����� */
//// һ�������Ĳ�������һ�������ĵ�ַ
//// ���ض������£�ͨ�������������ʵ����һ������
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
//	test(Add);// �ص�����
//	return 0;
//}
//// �򵥼�����ʵ��3
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
//	printf("������Ҫ��������֣�>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main() {
//	int input = 0;
//	do {
//		menu();
//		printf("�����룺>");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("����������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
// //qsort() - ����������
//void qsort(void* base,  // ����������Ԫ�ص�ַ
//            size_t num, // ����Ԫ��
//            size_t size,// ����Ԫ�ش�С
//            int (*compar)(const void*, const void*)// ȷ������ʽ�Ĺ�ϵ����
//            );
//void bobble_sort(int arr[], int sz) {// ð������
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
//// ��ð������ģ��ʵ��qsort()���� - ���������������ݽ�������
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
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//// ð������
//	//bobble_sort(arr, sz);
//	
//	//// ��������
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

	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));// 6
	//printf("%d\n", sizeof(arr + 0));// 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));// 4/8
	//printf("%d\n", sizeof(&arr[0] + 1));// 4/8

	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));// ���ֵ
	//printf("%d\n", strlen(arr + 0));// ���ֵ
	////printf("%d\n", strlen(*arr));// err - ���󴫲�
	////printf("%d\n", strlen(arr[1]));// err - ���󴫲�
	//printf("%d\n", strlen(&arr));// ���ֵ
	//printf("%d\n", strlen(&arr + 1));// ���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1));// ���ֵ-1

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
	//printf("%d\n", strlen(*arr));// err - ���󴫲�
	//printf("%d\n", strlen(arr[1]));// err - ���󴫲�
	printf("%d\n", strlen(&arr));// 6
	printf("%d\n", strlen(&arr + 1));// 12
	printf("%d\n", strlen(&arr[0]+1));// 5
	return 0;
}
