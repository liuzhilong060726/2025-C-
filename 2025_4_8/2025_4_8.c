#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/8 */

/* C���Գ��� */
#include <stdio.h>

/* ѭ���ṹ��ϰ */
//// 4.��д���룬��ʾ����ַ��������ƶ������м���
//#include <string.h>
//#include <windows.h>
//int main() {
//	char arr1[] = "Hello,My name is Liuzhilong";
//	char arr2[] = "###########################";
//	int i = 0;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		system("cls");// ��������
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//// 5.��֤������ȷ�ԣ�ֻ�����λ���
//#include <string.h>
//int main() {
//	char password[] = { 0 };
//	int i = 0;
//	while (i < 3) {
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else {
//			printf("��½ʧ�ܣ��㻹��%d�λ���\n", 3 - i - 1);
//		}
//		i++;
//	}
//	return 0;
//}

/* ��������Ϸ */
//#include <time.h>
//#include <stdlib.h>
//void Menu() {
//	printf("****** 1.Play ******\n");
//	printf("****** 0.exit ******\n");
//}
//void game() {
//	int num = 0;
//	// ����1-100�������
//	// ����rand()���ɵ��������1-32767������ģ100��Χ��0-99���ټ�1��Χ�ͱ��1-100
//	int ret = rand() % 100 + 1;
//	int count = 0;// ������
//	// �ж������Ƿ����
//	do {
//		count++;
//		// ������
//		printf("��²�:>");
//		scanf("%d", &num);
//		if (num == ret) {
//			break;
//		}
//		else if (num < ret) {
//			printf("��С��\n");
//		}
//		else {
//			printf("�´���\n");
//		}
//	} while (num != ret);
//	printf("�¶��ˣ�����%d��\n", count);
//}
//int main() {
//	//����ʱ���
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	// ֻҪ��Ҳ������˳�����Ϸ�Ͳ������
//	while (1) {
//		// ��ӡ�˵�
//		Menu();
//		// ����
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		// ѡ�����
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			return 0;
//		default:
//			printf("�����ʽ��������������\n");
//			break;
//		}
//	}
//	return 0;
//}


///* ������������ */
//void swap(int* px, int* py) {
//	int temp = *px;// ����ָ����ָ�������
//	*px = *py;
//	*py = temp;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		swap(&a, &b);// ����ַ�����������������ܸı�ʵ��
//	}
//	if (a < c) {
//		swap(&a, &c);
//	}
//	if (b < c) {
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);// һ�δӴ�С��ӡ
//	return 0;
//}


/* ��ӡ1-100֮��3�ı��� */
//int main() {
//	int i = 0;
//	//for (i = 1; i <= 100; i++) {
//	//	if (0 == i % 3) {
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i += 3) {
//		printf("%d ", i);
//	}
//	return 0;
//}


/*  ����������������� */
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//// ����һ:�оٷ�������������С��һ����ʼ�����Ƿ��ܱ�����������
//	//// Ȼ�����μ�1��֪���ҵ�Ϊֹ
//	//int min = a;
//	//if (a > b) {
//	//	min = b;
//	//}
//	//while (1) {
//	//	if (a % min == 0 && b % min == 0) {
//	//		break;
//	//	}
//	//	min--;
//	//}
//	//printf("���Լ����%d", min);
//
//	// ��������շת�����
//	int c = 0;
//	int m = a;
//	int n = b;
//	while (c = a % b) {
//		a = b;
//		b = c;
//	}
//	printf("���Լ����%d\n", b);
//
//	// ��С������=�������ĳ˻�*���Լ��
//	printf("��С��������%d\n", m * n / b);
//
//	return 0;
//}


/* ��ӡ1000�굽2000��֮������� */
//// �ܱ�4���������ܱ�100�������������ܱ�400������������
//int main() {
//	int i = 0;
//	for (i = 1000; i < 2000; i++) {// ��ȡ1000-2000������
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {// �ж�����
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

/* ��ӡ100-200 ֮������� */
//// ֻ�ܱ��Լ���1��������������
//#include <math.h>
//int Is_Sushu(int n) {
//	int i = 0;
//	int fount = 1;
//	//for (i = 2; i < n; i++) {
//	//	if (n % i == 0) {
//	//		fount = 0;// ����ܱ���������������0
//	//		break;
//	//	}
//	//}
//
//	// һ�������Ա�д�ɣ�һ����С������*��һ���ϴ��������������һ������ƽ��
//	// ����ֻ��Ҫ֪���������������֮ǰ������û�����������ľ����ж����ǲ�������
//	for (i = 2; i <= sqrt(n); i++) {// sqrt()����һ�����Ŀ�����ֵ
//		if (0 == n % i) {
//			fount = 0;
//			break;
//		}
//	}
//	return fount;
//}
//int main() {
//	int i = 0;
//	for (i = 100; i < 200; i++) {
//		if (Is_Sushu(i)) {// ���ط�0��ʾ������
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


/* goto��� */
//// ������÷�����������ѭ���������������Ƽ�ʹ��
//// ֻ����һ�����������У����ܿ纯������
//int main() {
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;// ѭ����ӡhehe��haha�޷�����
//	
//	return 0;
//}



/* �ػ����� */
//#include <string.h>
//#include <stdlib.h>
//int main() {
//	char arr[20] = {0};
//	// �ػ�
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("��ĵ��Խ���60���ػ��������ȡ����������:������\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



/* ���� */

/* �⺯�� */
//// IO������printf  getchar
//// �ַ�������������strcmp  strlen
//// �ַ�����������toupper
//// �ڴ����������memcmp  memset  memcpy
//// ʱ��/���ں�����time
//// ��ѧ������sqrt  pow
//// �����⺯����
//#include <string.h>
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello world!";
//
//	//// strcopy����ѧϰ
//	//strcpy(arr1, arr2);//��arr2������arr1��
//	//printf("%s", arr1);
//
//	// memset����ѧϰ
//	// �����ṹ
//	// mem(void* ptr, int value, size_t num)
//	memset(arr2, 'x', 5);// ���ǽ�arr2��ǰ5���ַ�����'x'
//	printf("%s", arr2);
//
//	return 0;
//}


/* �Զ��庯�� */
// �����Ļ����ṹ
// �������������������ͣ�����������������

//// �Լ�����һ�����������������ֵ
//int Max(int x, int y) {
//	return (x > y ? x : y);
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = Max(a, b);
//	printf("%d", max);
//}

// ����һ������������������ֵ
// ��һ����������Ҫ����ֵʱ��������Ϊvoid
// ʵ�ʲ���-ʵ�Σ��������ݵ�ֵ�������ǳ��������������ʽ�����Լ��������ģ������������Լ��������ģ�
// ��ʽ�������βΣ��������մ��ݲ����ģ����ú���ʱ������������ʱ����
// �β�ֻ��ʵ�ε�һ����ʱ�������βεĸı䲻��Ӱ��ʵ��
// ��ֵ���ã��βκ�ʵ��ռ�в�ͬ���ڴ棬���βεĸı䲻Ӱ��ʵ��
// ��ַ���ã��Ѻ����ⲿ���������ĵ�ַ��������������һ�ֵ��÷�ʽ
// ���ֵ��ûὫ�����ͺ����ⲿ�ı�����ϵ������Ҳ���Ǻ����ڲ�ֱ�ӾͿ��Բ��������ⲿ�ı���
void Swap1(int x, int y) {// ��ֵ����
	int t = x;
	x = y;
	y = t;
}
void Swap2(int* pa, int* pb) {// ��ַ����
	// ָ����������ú��ٽ���,���Ӧ��ַ��ֵҲ�ᷢ���ı�
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
int main() {
	int a = 10;
	int b = 20;
	Swap1(a, b);// ��ֵ
	printf("a = %d, b = %d\n", a, b);// �����a = 10, b = 20������Ԥ��
	Swap2(&a, &b);// ��ַ
	printf("a = %d, b = %d\n", a, b);// �����a = 20, b = 10����Ԥ��
	return 0;
}