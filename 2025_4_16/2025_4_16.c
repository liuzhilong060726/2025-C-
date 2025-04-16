#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/16 */

/* C语言初阶 */
#include <stdio.h>

/* 指针初阶 */

//// 指针的关系运算
//// 用于比较；两个指针的内存大小，通常判断指针的相对位置
//int main() {
//	//// 1.比较同一数组或内存块指针
//	//int arr[5] = { 10, 20, 30, 40, 50 };
//	//int* start = arr;
//	//int* end = arr + 5;// 指向数组末尾的下一个位置
//	//// 数组遍历
//	//while (start < end) {
//	//	printf("%d ", *start);
//	//	start++;
//	//}
//
//	//// 2.检查指针是否为NULL
//	//int* ptr = NULL;
//	//if (ptr == NULL) {
//	//	printf("指针未初始化或以释放\n");
//	//}
//
//	// 3.判断指针是否在有效范围内
//	int buffer[100];
//	int* ptr = &buffer[50];
//	if (ptr >= buffer && ptr < buffer + 100) {
//		printf("指针在有效范围内\n");
//	}
//	else {
//		printf("指针越界！\n");
//	}
//	return 0;
//}

//// 指针与数组
//// 当数组传递给函数时，实际传递的是指针
//// 数组名不可赋值，指针可以
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	//// 数组名大部分情况下可以退化为数组首元素地址
//	//int* p = arr;
//	//printf("%d ", *p);
//
//	int* p = &arr;
//	int i = 0;
//	// 指针可以向数组一样访问，数组也一样
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

//// 指针数组
//int main() {
//	// 定义
//	int* prt_arr[5];
//	char* str_list[3];
//
//	return 0;
//}


/* 结构体初阶 */
// 结构体 - 可以将不同类型的数据组合起来的工具

// 结构体声明
struct Student {
	char name[50];
	int age;
	float score;
};
//typedef struct {// 使用typedef简化
//char name[50];
//int age;
//} Person;// 现在可以直接使用Person代替struct Person

//// 结构体变量定义
//// 1.先声明，后定义
//struct Student stu1;
//// 2.声明时直接定义
//struct Student {
//	char name[50];
//	int age;
//	float score;
//} stu1, stu2;
//// 3.使用typedef定义
//typedef struct {
//	char name[50];
//	int age;
//} Person;
//Person p1;

// 结构体的嵌套 - 结构体可以包含其他结构体
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
	// 初始化
	struct Student stu1 = { "张三", 20, 78.5 };
	// 部分初始化
	struct Student stu2 = { "王五" };
	// 访问
	// 1.使用(.)操作符
	printf("%s %d %f\n", stu1.name, stu1.age, stu1.score);
	// 2.使用(*)操作符
	struct Student* ptr = &stu2;
	printf("%s\n", ptr->name);
	printf("%s\n", (*ptr).name);

	struct Eployee emp1 = {
		"张三",
		{2025, 4, 16},
		8500.0
	};
	printf("%s %d %d %d %f",
		emp1.name,
		emp1.birthday.year,
		emp1.birthday.month,
		emp1.birthday.day,
		emp1.salary);

	// 结构体作为函数参数
	printStudent(stu1);
	printEployee(&emp1);
	return 0;
}