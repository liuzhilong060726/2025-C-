#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/9 */

/* C���Գ��� */
#include <stdio.h>

/* ���� */

/* ��ϰ */
//// 1.�ж�һ�����ǲ�������
//#include <math.h>
//int Is_Sushu(int n) {
//	int i = 0;
//	int found = 1;// Ĭ��������
//	for (i = 2; i <= sqrt(n); i += 2) {// ��߼���Ч�ʣ�����������ż������2�⣩����С���Ӳ��ܴ����俪����ֵ
//		if (0 == n % i) {// �ܷ�����
//			found = 0;// �����������޸ķ���ֵ
//			break;// ȷ������������Ͳ��ü�������ѭ����
//		}
//	}
//	return found;
//}
//int main() {
//	int n = 0;
//	// ����Ҫ�жϵ�����
//	scanf("%d", &n);
//	// �ж�
//	if (Is_Sushu(n)) {
//		printf("%d������", n);
//	}
//	else {
//		printf("%d��������", n);
//	}
//	return 0;
//}

//// 2.�ж��ǲ�������
//// һ��������д��������Ĭ����int����
//int Is_Leap_year(int n) {
//	int value = 0;
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
//		value = 1;
//	}
//	return value;
// // // ֱ�ӷ���
// // return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if (Is_Leap_year(year)) {
//		printf("%d������", year);
//	}
//	else {
//		printf("%d��������", year);
//	}
//	return 0;
//}

//// 3.ʵ��һ������������ֲ���
//// �ҵ������±꣬�Ҳ�������-1
//int binary_search(const int a[], int k, int s) {
//  // �����ں����ڲ��������С����Ϊ��������ֻ����Ԫ�صĵ�ַ
//	int left = 0;
//	int right = s - 1;
//	int mid = 0;
//	int value = -1;
//	// ��ʼ����
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else if (a[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			value = mid;
//			break;
//		}
//	}
//	return value;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);// �����鳤�ȷ��㴫������
//	int key = 17;
// // ����arr����ʵ���ϴ��Ĳ������鱾����������ȥ��Ԫ�صĵ�ַ
//	if (-1 == binary_search(arr, key, sz)) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±���%d", binary_search(arr, key, sz));
//	}
//	return 0;
//}

//// 4.����ÿ����һ�Σ�num��1
//void Add(int* p) {
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	Add(&num);// ֻ�д�ַ���ܸı�ʵ��
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}


/* ������Ƕ�׵��ú���ʽ���� */
//// Ƕ�׵���
//void test2() {
//	printf("hehe");
//}
//void test1() {
//	test2();
//}
//int main() {
//	test1();
//	return 0;
//}

//// ��ʽ����
//#include <string.h>
//int main() {
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	
//	//printf("%d\n", strlen("abc"));
//
//	//printf()�ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


/* �����������Ͷ��� */
//// һ�������ڵ���֮ǰ��������
//// ����������ڵ��ú���֮ǰ��һ�����ͷ�ļ����У�����Э������
//// ����������Ǻ��������壬���Է��ڵ���֮�󣬵�ǰ�����Ѿ�������
//// Ҳ���Է��ں�������֮ǰ����������ʡ������
//#include "Add.h"
//// int Add(int x, int y);// ����������ע��ֺŲ���ʡ��
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}
//////��������
////int Add(int x, int y) {
////	return x + y;
////}


/* �����ݹ� */
// ֱ�ӻ��ӵ��������һ�ַ���
// ������򻯣���һ�����ӵ�����ת������ԭ�������ƵĹ�ģ��С���������
// �ݹ��������Ҫ������������Ҳ��һ����ȷ��
// 1.������һ�����������������������������ʱ�ݹ鲻�ټ���
// 2.ÿ�εݹ���ú�Խ��Խ�ӽ������������
// �ݹ��β���̫���Ȼ����ջ���
// ��ϰ-1
//void print(int n) {
//	if (n > 9) {// ����λ��С��1ʱ�������ã����������9ʱ��������
//		print(n / 10);// ����λ��
//	}
//	printf("%d ", n % 10);// ȡ�����һλ��ӡ
//}
//int main() {
//	int num = 1234;
//	// �������ÿһλһ�δ�ӡ����
//	// print(123)
//	// print(12) 3
//	// print(1) 2 3
//	print(num);
//	return 0;
//}

// ��ϰ-2
//// ģ��ʵ��strlen()����
////int my_strlen(char* str) {// һ�㷽��
////	int count = 0;// ������
////	while (*str != '\0') {
////		count++;
////		str++;// ��ַ����ƶ�
////	}
////	return count;
////}
//int my_strlen(char* str) {// �ݹ�ʵ�֣���������ʱ����
//	// strlen("abc")
//	// 1 + strlen("bc")
//	// 1 + 1 + strlen("c")
//	// 1 + 1 + 1 + strlen('\0')
//	if (*str != '\0') {// �����ǰ��ַ��Ӧ���ַ�����'\0'���������ú���
//		return 1 + my_strlen(str + 1);// ����һ�κ�������ֵ��1����ַҪ����ƶ�1λ
//	}
//	else {// ����ַ�������Ϊ0��ֱ�ӷ���0
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "abc";
//	// ���ַ�������
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

// ��ϰ-3
//// ��n�Ľ׳ˣ������������
//// 3��
//// 3 * 2!
//// 3 * 2 * 1!
//int Factorial(int n) {
//	if (0 != n) {
//		return n * Factorial(n - 1);
//	}
//	else {// 0�Ľ׳���1
//		return 1;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d�Ľ׳���%d", n, Factorial(n));
//	return 0;
//}

// ��ϰ-4
//// ���n��쳲�������
//// 쳲���������1 1 2 3 5 8 13 21 34 55
//// ��һ������ǰ�������ĺͣ�ǰ�������ⶼ��1��
////int Fib(int n) {// �ݹ鷨-Ч��̫�ͣ��ظ���������
////	if (n <= 2) {
////		return 1;
////	}
////	else {
////		return Fib(n - 1) + Fib(n - 2);
////	}
////}
//int Fib(int n) {// ������-Ч�ʸ���
//	int a = 1;
//	int b = 1;
//	int c = 1;// ��֤ǰ��������������ȷ������1
//	while (n > 2) {// ��3������ʼ�Ž���ѭ��
//		c = a + b;// ͳ��ǰ�������ĺ�
//		// ����ǰ��������ֵ
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	return 0;
//}


/* ��ŵ������ */
//// �������� 3�����ӣ�A��B��C�� �� n����С��ͬ�����ӣ����Ӵ�С�������A���ϣ������ڵ��£���С���ڶ��ϡ�
//// Ŀ�꣺���������Ӵ�A���ƶ���C���������ǣ�
//// 1.ÿ��ֻ���ƶ�һ�����ӣ�
//// 2.�ƶ������У������Ӳ���ѹ��С�����ϡ�
//// ���from���յ�to������aux
//void hanoi(int n, char from, char to, char aux) {
//	int count = 0;
//	if (n == 1) {// �ݹ���ֹ������ֻʣ1������ʱֱ���ƶ�
//		count++;
//		printf("������ %d �� %c �ƶ���%c\n", n, from, to);
//		return;
//	}
//	// ��һ������n-1�����Ӵ�from�ƶ���aux����to��Ϊ������
//	hanoi(n - 1, from, aux, to);
//	// �ڶ���������n�������ƶ���Ŀ����
//	count++;
//	printf("������ %d �� %c �ƶ���%c\n", n, from, to);
//	// ����������n-1�����Ӵ�aux�ƶ���to����from��Ϊ������
//	hanoi(n - 1, aux, to, from);
//}
//int main() {
//	int n = 0;
//	printf("���������ӵ�������");
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}


/* ������̨������ */
// һֻ����Ҫ���� n ��̨�ף���ÿ�ο�����1����2����
// �ʣ������ж����ֲ�ͬ�ķ�ʽ���������� n ��̨�ף�
int jump(int n) {
	if (n == 1) {// ��һ��̨��ֻ��1�ַ���
		return 1;
	}
	else if (n == 2) {// ������̨����2�ַ���
		return 2;
	}
	else {
		// ���� n �����ܷ����� = ����n-1���ķ����� + ����n-2���ķ�����
		return jump(n - 1) + jump(n - 2);
	}
}
int main() {
	int n = 0;
	printf("������̨������");
	scanf("%d", &n);
	printf("�� %d ������", jump(n));
	return 0;
}