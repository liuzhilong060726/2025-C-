#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/5/14 */

/* C���Խ��� */
#include <stdio.h>

/* ָ����� */

/* һ��ָ�봫�� */
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d", *(p + i));
//	}
//}
//void test(char* p) { // ��һ����������Ϊһ��ָ���ʱ���ܽ���ʲô��
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

/* ����ָ�봫�� */
//void test(int** p) {// ��һ����������Ϊ����ָ���ʱ���ܽ���ʲô��
//
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);// ��һ��ָ������ĵ�ַ
//	int* arr[10];
//	test(arr);// ��һ�����һ��ָ�������
//
//	return 0;
//}

/*����ָ��*/
//// ָ������ָ�� - ��ź�����ַ��ָ��
//int Add(int x, int y) {
//	return x + y;
//}
//void test(char* p) {
//
//}
//int main() {
//	//int ret = Add(3, 4);
//
//	//����ָ��
//	int (*f)(int, int) = &Add;// &Add == Add
//	// int (*f)(int, int) = Add;
//	
//	int ret = (*f)(3, 4);// �ⲻ������Ч����һ��
//	// int ret = f(3, 4);
//
//	printf("%d", ret);
//
//	void (*t)(char*) = test;
//	return 0;
//}

// �������ʽ���ж�
// (*(void(*)())0)();
// (void(*)())0 -> ��0ǿ��ת���ɺ���ָ������
// *(void(*)())0 -> ��0��ַ���н�����
// (*(void(*)())0)() -> ����0��ַ���ĺ���
// 
// void(*signal(int ,void(*)(int)))(int);
// signal(int ,void(*)(int)) -> һ���������������ֱ���int���ͣ�����ָ������
// void(*signal(int ,void(*)(int)))(int) -> �Ժ���signal�����������䷵��������void(*)(int)
// Ҳ���Զ�����м�
// typedef void(*pfun_t)(int);// ��void(*)(int)ͨ��typedef������Ϊpfun_t
// pfun_t signal(int, void(*)(int));


/* ����ָ������ */
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int main() {
//	// ����ָ��
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	// ����ָ������
//	int (*pfArr[2])(int, int) = { Add, Sub };
//	return 0;
//}

//// ����ָ������ļ�Ӧ�� - ģ��򵥼�����
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
//// ��ͨ��
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		int ret = 0;
//		switch (input) {
//		case 1:
//			printf("������Ҫ���������>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������Ҫ���������>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������Ҫ���������>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������Ҫ���������>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}