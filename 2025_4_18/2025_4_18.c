#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/18 */

/* C���Գ��� */
#include <stdio.h>

/**/
////// ģ��ʵ��strcpy
////void my_strcpy(char* dest, char* src) {
////	// ����'\0'֮ǰ���ַ�
////	while (*src != '\0') {
////		//*dest = *src;
////		//// ��������һ����ַ
////		//dest++;
////		//src++;
////		*dest++ = *src++;
////	}
////	// ����'\0'
////	*dest = *src;
////}
//#include <assert.h>
//void my_strcpy(char* dest, char* src) {// �������
//	assert(dest != NULL);// ����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++) {// ������'\0'ʱ�����ʽ��ֵΪ0����ѭ��
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

/* const�÷� */
// const���γ����������ɱ��޸�
// const�� * ǰָ������޸ģ������ú󲻿ɱ��޸�
// const�� * ������ú���޸ģ�ָ�벻�ɱ��޸�
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
//void my_strcpy(char* dest, const char* src) {// arr2���������ڲ��󲻿ɱ��޸ģ���src���ɱ��޸�
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

//// ģ��ʵ��strlen����
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



/* ������������ */
//// �������
//// 1.�﷨���� - ���ȱʧ��;��)��}�ȷ���
//// 2.���Ͳ�ƥ��
//// ��ʽ����ת����int a = (int)"hello";�����߼������������⣩,ʹ����ȷ������
//// 3.δ������ʶ��
//// ������/�����Ƿ���ȷ���壬ȷ��ͷ�ļ��Ѱ���
//// 4.��չ������ - �����������
//#define SQUARE(x) x*x
//int main() {
//	//1.
//	printf("Hello")  // ȱ�ٷֺ�
//	//2.
//	int a = "hello";  // �ַ�������int
//	//3.
//	printf("%d", x);  // xδ����
//	//4.
//	int a = SQUARE(2 + 3); // չ��Ϊ2+3*2+3=11����Ԥ�ڵ�25��b
//
//	return 0;
//}

//// ���Ӵ���
//// 1.δ��������� - ��麯�������Ƿ�һ�£�ͷ�ļ��е�������ʵ�֣�
//// 2.ȱ�ٶ���
//// ��ͷ�ļ�����extern������extern int var;
//// ʹ��static����������static int var = 10;
////
//// math.c
//int square(int x) { return x * x; }
//// main.c
//int main() {
//	//1.
//	printf("%d", square(2));  // ����ɹ�������ʧ��
//	//2.
//	// a.c
//	int var = 10;
//	// b.c
//	int var = 20;  // ����ʱ���ظ�����
//  
//  return 0;
//}

// ����ʱ����
// 1.�δ��� - ���ָ���Ƿ���Ч
// 2.�ڴ�й© - ��ѭ˭����˭�ͷ�ԭ��
// 3.����Խ�� - ���ѭ���߽�����
// 4.������� - �������Ƿ�Ϊ0
void func() {
	int* p = malloc(100);
	// ����free(p)
}
int main() {
	//1.
	int* p = NULL;
	*p = 10;  // ���ʿ�ָ��
	//2.
	func();
	//3.
	int arr[3] = { 1,2,3 };
	printf("%d", arr[5]);  // Խ�����
	//4.
	int a = 10 / 0;  // ���������ܲ������������inf

	return 0;
}