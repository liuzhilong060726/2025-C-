#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/19 */

/* C���Գ��� */
#include <stdio.h>

/* ��ϰ */
//// 1.��һ�����Ķ�������1�ĸ���
////int number_count(int n) {
////	int count = 0;
////	while (n) {
////		if (n % 2) {
////			count++;
////		}
////		n /= 2;
////	}
////	return count;
////}
////int number_count(int n) {
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++) {
////		if((1 & (n >> i)) == 1)
////			count++;
////	}
////	return count;
////}
//int number_count(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	// 00000000000000000000000000001010
//	// 00000000000000000000000000000001
//	// 00000000000000000000000000001010
//	// 00000000000000000000000000001001
//
//	int ret = number_count(n);
//	printf("%d", ret);
//	return 0;
//}

//// 2.����������λ��ͬλ�ĸ���
//int number_count(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	/*int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) {
//		if (((a >> i) & 1) != ((b >> i) & 1)) {
//			count++;
//		}
//	}*/
//
//	int ret = a ^ b;// ��ͬΪ0����ͬΪ1
//	int count = number_count(ret);
//
//	printf("%d", count);
//	return 0;
//}

//// 3.��ȡһ����������λ����������ż��
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	// ��ӡ����λ
//	for (i = 31; i >= 1; i -= 2) {
//		printf("%d ", 1 & (n >> i));
//	}
//	printf("\n");
//	// ��ӡż��λ
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", 1 & (n >> i));
//	}
//
//	return 0;
//}

//// 4.��������ʱ������������������ֵ
//int main() {
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

//// 5.�ж�һ�����ǲ���2��n�η�
//int number_count(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (number_count(n) == 1) {
//		printf("��2��n�η�\n");
//	}
//	else {
//		printf("����2��n�η�\n");
//	}
//	return 0;
//}

//// С�˴洢
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		// short*���Կ���2���ֽڴ�С�ռ�
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);// 0 0 3 4 5
//	}
//	return 0;
//}



/* ���ײ��� */

//// 1.
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main() {
//	fib(8);
//	printf("%d", cnt);// 67
//	return 0;
//}

//// 2.
//int main() {
//	int i = 1;
//	do {
//		printf("%2d", i++);// ��ѭ��
//	} while (i--);
//	return 0;
//}

////3.
//int main() {
//	int i = 1;
//	int j;
//	j = i++;
//	printf("i=%d j=%d", i, j);// 2 1
//	return 0;
//}

//// 4.
//int main() {
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;
//	printf("%d", k);// 90
//	return 0;
//}

//// 5.
//int a = 1;
//void test() {
//	int a = 2;
//	a += 1;
//}
//int main() {
//	printf("%d", a);// 1
//	return 0;
//}

//// 6.
//int main() {
//	int a = 0, c = 0;
//	do {
//		--c;
//		a = a - 1;
//	} while (a > 0);
//	printf("%d", c);// -1
//	return 0;
//}

//// 7.������������С������
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	// �Գ���
//	/*int m = a > b ? a : b;
//	int i = 0;
//	for (i = m; ; i++) {
//		if (i % a == 0 && i % b == 0) {
//			printf("%d", i);
//			break;
//		}
//	}*/
//	// �Ľ����Գ���
//	/*int i = 0;
//	for (i = 1; ; i++) {
//		if ((a * i) % b == 0) {
//			printf("%d", a * i);
//			break;
//		}
//	}*/
//	// շת����� + ��С���������㷽��
//	int c = 0;
//	int m = a * b;
//	while (b) {// ���������
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	m /= a;// ��С������ = �����ɼ� / �������
//	printf("%d", m);
//	return 0;
//}

// 8.�߼��ַ�������
// Ҫ�󣺽�I like beijing.ת����beijing. like I
void reverse(char* left, char* right) {
	while (left < right) {
		char tmp;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {
	char arr[100] = { 0 };
	// ������scanf����ȡ����Ϊ�м��пո�
	//scanf("%s", arr);

	// ����
	gets(arr);

	// ȫ������
	int len = strlen(arr);
	reverse(arr, arr + len - 1);// �����ַ�����Ԫ�ص�ַ�������һ��Ԫ�ص�ַ
	//printf("%s", arr);// ���Թ���
	
	// �������򣨶Ը������ʽ�������
	char* start = arr;
	while (*start) { //������'\0'ʱ����ѭ��
		char* end = start;// �ҵ���ĩβ
		while (*end != '\0' && *end != ' ') {
			end++;
		}
		// end��ͣ�ڵ�����һ����ַ
		reverse(start, end - 1);// ���򵥴�
		// ���û�����ӽ����ͼ�������
		if(*end == ' ')
			start = end + 1;
		else {// ����' '˵���Ѿ����˾���ĩβ���Ҵ�ʱend��ŵ���'\0'�ĵ�ַ
			start = end;
		}
	}
	printf("%s", arr);
	return 0;
}