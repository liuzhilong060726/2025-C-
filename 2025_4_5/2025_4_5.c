#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/5 */

/* ��ʶC���� */
#include <stdio.h>

/* ��ʶ�����ؼ��� */
//// 1.C�����ṩ�ģ������Լ�����
//// 2.�����������ǹؼ���
//
//// auto���Զ��ģ�ÿ���ֲ���������auto���ε�
//// extern�������ⲿ����
//// register�����齫ֵ����ڼĴ�������
//// signed���з��ŵ�
//// unsigned���޷��ŵ�
//// static����̬��
//// union�������壨�����壩
//// typedef�������ض���
//
//typedef unsigned int u_int;// �����
//void test() {
//	// int a = 1;
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	//unsigned int num1 = 10;
//	//u_int num2 = 20;// num1 �� num2 ��������ͬ
//
//	// static ��̬��
//	// 1.static���ξֲ��������Ǿֲ���������ȫ�ֱ���������
//	// 2.static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ���ʹ�ã�ʹ��ֻ�����ڲ���������
//	// 3.static���κ�����ʹ�ú���ֻ����ֻ�ǵ�Դ�ļ��ڱ�ʹ�ã������������ļ���ʹ��
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	
//	return 0;
//}


/* #define ���峣���ͺ� */
//#define MAX 100// ���峣��
//#define ADD(x, y) ((x) + (y))// ����꣨����ʹ�����ţ�
//int main() {
//	printf("%d\n", MAX);
//
//	int a = 10;
//	int b = 20;
//	int c = 2 * ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


/* ��ʶָ�� */
int main() {
	//int a = 10;// a ���ڴ���Ҫ����ռ� - 4�ֽ�
	//printf("%p\n", &a);// %p ��ר��������ӡ��ַ��
	//int* pa = &a;// pa�������a�ĵ�ַ����������int*����C������pa����ָ�����
	//// ���ָ����������ɱ����������;�����
	//// *˵��pa��ָ�����
	//// int˵��ִ�еĶ�����int���͵�
	//char ch = 'a';
	//char* pc = &ch;

	//// * �����ò�����
	//int a = 10;
	//int* pa = &a;
	//*pa = 20;// *pa����ͨ��pa�����ŵĵ�ַ�ҵ�a
	//printf("%d\n", a);// 20

	// ָ���С - 32λƽ̨��С����4���ֽڣ�64λƽ̨��8���ֽ�
	printf("%d\n", sizeof(int*));//4
	printf("%d\n", sizeof(short*));//4
	printf("%d\n", sizeof(long*));//4
	printf("%d\n", sizeof(long long*));//4
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(double*));//4
	printf("%d\n", sizeof(float*));//4

	return 0;
}