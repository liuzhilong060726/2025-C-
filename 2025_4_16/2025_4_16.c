#define _CRT_SECURE_NO_WARNINGS

/* ��־�� */
/* 2025/4/16 */

/* C���Գ��� */
#include <stdio.h>

/* ָ����� */

//// ָ��Ĺ�ϵ����
//// ���ڱȽϣ�����ָ����ڴ��С��ͨ���ж�ָ������λ��
//int main() {
//	//// 1.�Ƚ�ͬһ������ڴ��ָ��
//	//int arr[5] = { 10, 20, 30, 40, 50 };
//	//int* start = arr;
//	//int* end = arr + 5;// ָ������ĩβ����һ��λ��
//	//// �������
//	//while (start < end) {
//	//	printf("%d ", *start);
//	//	start++;
//	//}
//
//	//// 2.���ָ���Ƿ�ΪNULL
//	//int* ptr = NULL;
//	//if (ptr == NULL) {
//	//	printf("ָ��δ��ʼ�������ͷ�\n");
//	//}
//
//	// 3.�ж�ָ���Ƿ�����Ч��Χ��
//	int buffer[100];
//	int* ptr = &buffer[50];
//	if (ptr >= buffer && ptr < buffer + 100) {
//		printf("ָ������Ч��Χ��\n");
//	}
//	else {
//		printf("ָ��Խ�磡\n");
//	}
//	return 0;
//}

//// ָ��������
//// �����鴫�ݸ�����ʱ��ʵ�ʴ��ݵ���ָ��
//// ���������ɸ�ֵ��ָ�����
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	//// �������󲿷�����¿����˻�Ϊ������Ԫ�ص�ַ
//	//int* p = arr;
//	//printf("%d ", *p);
//
//	int* p = &arr;
//	int i = 0;
//	// ָ�����������һ�����ʣ�����Ҳһ��
//	for (i == 0; i < 5; i++) {
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(i + p));
//		//printf("%d ", i[arr]);
//		printf("%d ", p[i]);
//	}
//
//	return 0;
//}

//// ָ������
//int main() {
//	// ����
//	int* prt_arr[5];
//	char* str_list[3];
//
//	return 0;
//}


/* �ṹ����� */
// �ṹ�� - ���Խ���ͬ���͵�������������Ĺ���

// �ṹ������
struct Student {
	char name[50];
	int age;
	float score;
};
//typedef struct {// ʹ��typedef��
//char name[50];
//int age;
//} Person;// ���ڿ���ֱ��ʹ��Person����struct Person

//// �ṹ���������
//// 1.������������
//struct Student stu1;
//// 2.����ʱֱ�Ӷ���
//struct Student {
//	char name[50];
//	int age;
//	float score;
//} stu1, stu2;
//// 3.ʹ��typedef����
//typedef struct {
//	char name[50];
//	int age;
//} Person;
//Person p1;

// �ṹ���Ƕ�� - �ṹ����԰��������ṹ��
struct Date {
	int year;
	int month;
	int day;
};

struct Eployee {
	char name[50];
	struct Date birthday;
	float salary;
};

void printStudent(struct Student stu) {
	printf("%s %d %f\n", stu.name, stu.age, stu.score);
}
void printEployee(struct Eployee* emp) {
	printf("%s %d %d %d %f\n",
		emp->name,
		emp->birthday.year,
		emp->birthday.month,
		emp->birthday.day,
		emp->salary);
}
int main() {
	// ��ʼ��
	struct Student stu1 = { "����", 20, 78.5 };
	// ���ֳ�ʼ��
	struct Student stu2 = { "����" };
	// ����
	// 1.ʹ��(.)������
	printf("%s %d %f\n", stu1.name, stu1.age, stu1.score);
	// 2.ʹ��(*)������
	struct Student* ptr = &stu2;
	printf("%s\n", ptr->name);
	printf("%s\n", (*ptr).name);

	struct Eployee emp1 = {
		"����",
		{2025, 4, 16},
		8500.0
	};
	printf("%s %d %d %d %f",
		emp1.name,
		emp1.birthday.year,
		emp1.birthday.month,
		emp1.birthday.day,
		emp1.salary);

	// �ṹ����Ϊ��������
	printStudent(stu1);
	printEployee(&emp1);
	return 0;
}