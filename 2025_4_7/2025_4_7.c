#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/7 */

/* C���Գ��� */
#include <stdio.h>

/* ѭ�����while */
//int main() {
//	//int ch = getchar();// ��ȡһ���ַ���������
//	////printf("%c", ch);
//	//putchar(ch);// ���һ���ַ�
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) {// ѭ��һֱ���У� ctrl+z����
//	//	putchar(ch);// ÿѭ��һ�δ�ӡһ��
//	//}
//
//	//char password[20] = { 0 };
//	//printf("���������룺>");
//	//scanf("%s", password);// ���ܺܺõĴ���ո��ַ��������ո��ȡ����
//	//int tmp = 0;
//	//while ((tmp = getchar()) != '\n') {// ���������Ķ���ַ�
//	//	;
//	//}
//	//printf("��ȷ�ϣ�(Y/N)>");
//	//int ch = getchar();
//	//printf("�ɹ�");
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;// ��������������ӡ
//		putchar(ch);// ��ӡ����
//	}
//	return 0;
//}



/* ѭ�����for */
//// for(���ʽһ;���ʽ��;���ʽ��)
////     ѭ�����;
//// ������ѭ���ڲ�����ѭ����������ֹ��ʵʧȥ����
//// ����forѭ��ѭ�����Ʊ���ȡֵ��ȡ��ǰ�պ����䡱д��
//int main() {
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {// ѭ��10��
//	//	printf("%d", i + 1);// ��ӡ1-10
//	//}
//
//	//int i = 1;
//	//for (i = 1; i <= 10; i++) {
//	//	if (i == 5) {
//	//		continue;
//	//	}
//	//	printf("%d", i);
//	//}
//
//	//int i = 1;
//	//for (i = 1; i <= 10; i++) {
//	//	if (i == 5) {
//	//		break;
//	//	}
//	//	printf("%d", i);
//	//}
//
//	//// forѭ������
//	//// �жϲ���ʡ�ԣ��жϲ��ֺ�Ϊ��
//	//// ���������ʡ��
//	//for (;;) {
//	//	printf("hehe");
//	//}
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 3; i++) {
//	//	for (; j < 3; j++) {
//	//		printf("hehe\n");// ��ӡ����
//	//		//ִ����һ���j=3�´β����ٽ���ѭ��
//	//	}
//	//}
//
//	//// ����
//	//int x = 0;
//	//int y = 0;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//	//	printf("hehe\n");
//	//}
//
//	// ������
//	int x = 0;
//	int k = 0;
//	// ѭ��ִ��0��
//	for (x = 0, k = 0; k = 0; x++, k++)// ע���жϲ��ֶ�k�Ǹ�ֵ�������ж��Ƿ����
//		k++;
//
//	return 0;
//}



/* ѭ�����do-while */
// ����ѭ��������ִ��һ��
//int main() {
//	//int i = 1;
//	//do {
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i <= 10);
//
//	//int i = 1;
//	//do {
//	//	if (5 == i) {
//	//		continue;
//	//	}
//	//	printf("%d ", i);// ��ӡ��1-4����ѭ����ԭ����i��ֵ���ٷ����ı�
//	//	i++;
//	//} while (i <= 10);
//
//	int i = 1;
//	do {
//		if (5 == i) {
//			break;
//		}
//		printf("%d ", i);// ��ӡ��1-4������ѭ��
//		i++;
//	} while (i <= 10);// �����жϣ�Ϊ�����ѭ��
//	return 0;
//}


/* ��ϰ */
//// 1.����n�Ľ׳�
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int num = 1;
//	int i = 1;
//	for (i = 1; i <= n; i++) {
//		num *= i;// ����׳�
//	}
//	printf("%d�Ľ׳���%d", n, num);
//	return 0;
//}

//// 2.����1!+2!+...+10!
//int main() {
//	int n = 10;
//	int sum = 0;// ����ͳ�Ƽ������׳˵ĺ�
//	int	num = 1;
//	//int i = 1;
//	//int j = 1;
//	//for (i = 1; i <= n; i++) {
//	//	num = 1;// ÿ�θ���num��ֵ������ͳ����һ�����Ľ׳�
//	//	for (j = 1; j <= i; j++) {
//	//		num *= j;
//	//	}
//	//	sum += num;
//	//}
//
//	// �Ľ�
//	// n! = (n - 1) * n
//	int i = 1;
//	for (i = 1; i < n; i++) {
//		num *= i;
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}

//// 3.��һ��������������һ������n�����ֲ��ң�
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int lift = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int found = -1;// ���ڱ���Ƿ��ҵ���-1 ��ʾδ�ҵ�
//	while (lift <= right)
//	{
//		mid = (lift + right) / 2;// ȷ���м�ֵ
//		if (arr[mid] == n) {
//			found = mid;// ȷ���±�
//			break;// �ҵ���ͽ���ѭ��
//		}
//		else if (arr[mid] > n) {
//			right = mid - 1;// �������±�
//		}
//		else {
//			lift = mid + 1;// �������±�
//		}
//	}
//	if (found != -1) {
//		printf("�ҵ��ˣ��±���%d", found);
//	}
//	else {
//		printf("û�ҵ�");
//	}
//	return 0;
//}