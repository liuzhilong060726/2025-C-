#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/6 */

/* ��ʶC���� */
/* C���Գ��� */
#include <stdio.h>

/* ��ʶ�ṹ�� */
//// �ṹ�������C���Դ�����µ�������
//struct Stu {// ����һ��ѧ������
//	char name[20];
//	int age;
//	double score;
//};
//int main() {
//	struct Stu S = { "zhangsan", 20, 88.8 };// �ṹ���ʼ��
//	printf("%s %d %lf\n", S.name, S.age, S.score);// �ṹ�����.��Ա��
//	struct Stu* ps = &S;
//	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);// �ṹ�����������.��Ա��
//	printf("%s %d %lf\n", ps->name, ps->age, ps->score);// �ṹ��ָ��->��Ա��
//	return 0;
//}



// C�����ǽṹ�������������
// ���ֽṹ��˳��ṹ��ѡ��ṹ��ѭ���ṹ
// ��䣺��;���ֺŸ����ľ���һ�����
// C������0��ʾ�٣���0��ʾ��

/* ��֧���if-else */
//// if �� else ֻ�ܿ���һ����䣬��Ҫִ�ж������ʱҪ��������{}�����鶼��
//// else�����������ifƥ��
//int main() {
//	int age = 0;
//	scnaf("%d", &age);
//	/*if (age >= 18) {// ����֧
//		printf("����\n");
//	}*/
//
//	/*if (age >= 18) {// ˫��֧
//		printf("����\n");
//	}
//	else {
//		printf("δ����\n");
//	}*/
//
//	if (age < 18) {// ���֧
//		printf("����");
//	}
//	else if (age >= 18 && age < 26) {
//		printf("����");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("׳��");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("����");
//	}
//	else if (age >= 60 && age < 100) {
//		printf("����");
//	}
//	else {
//		printf("�ϲ���");
//	}
//	return 0;
//}

//// ��ϰ1���ж�һ�����ǲ�������
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == num % 2) {
//		printf("%d������\n", num);
//	}
//	else {
//		printf("%d��������\n", num);
//	}
//	return 0;
//}

//// ��ϰ2�����1-100֮�������
//int main() {
//	int i = 1;
//	//while (i <= 100) {// ѭ��100��
//	//	if (1 == i % 2) {// �ж��ǲ�������
//	//		printf("%d ", i);
//	//	}
//	//	i++;// ����i��ֵ
//	//}
//
//	for (i = 1; i <= 100; i++) {
//		if (1 == i % 2) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


/* ��֧���switch */
//// �����ṹ
//// switch(���α���)
////     case(���α��ʽ):���
//// switch���ʹ��ʱһ�����breakʹ��
//// break������������switch��䣨���Ǳ���)
//// ��Ҫע����ǣ���û������break֮ǰ����ִ��break֮ǰ������case���
//// default��ʹ�ã���ͨ������case��䲻���ڵ������һ�����ھ�����ʾ�������
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	switch (n) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


/* ѭ�����while */
// while(���ʽ)-���ʽ�����0����ѭ��������ִ��ѭ��
//     ѭ�����;
int main() {
	int i = 1;
	while (i <= 10) {
		//printf("%d ", i);// ��ӡ1-10

		//// ��whileѭ����break��������������ֹѭ��
		//if (5 == i) {
		//	break;
		//}
		//printf("%d ", i);// ��ӡ1-4

		// continue����������������ѭ�������룬������һ���ж��Ƿ������һ��ѭ��
		if (5 == i) {
			continue;
		}
		printf("%d ", i);//��ӡ��1-4����ѭ��
		i++;
	}
	return 0;
}