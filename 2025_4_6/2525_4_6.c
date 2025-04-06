#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/6 */

/* 初识C语言 */
/* C语言初阶 */
#include <stdio.h>

/* 初识结构体 */
//// 结构体可以让C语言创造出新的类型来
//struct Stu {// 创建一个学生类型
//	char name[20];
//	int age;
//	double score;
//};
//int main() {
//	struct Stu S = { "zhangsan", 20, 88.8 };// 结构体初始化
//	printf("%s %d %lf\n", S.name, S.age, S.score);// 结构体变量.成员名
//	struct Stu* ps = &S;
//	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);// 结构体变量解引用.成员名
//	printf("%s %d %lf\n", ps->name, ps->age, ps->score);// 结构体指针->成员名
//	return 0;
//}



// C语言是结构化程序设计语言
// 三种结构：顺序结构、选择结构、循环结构
// 语句：（;）分号隔开的就是一条语句
// C语言中0表示假，非0表示真

/* 分支语句if-else */
//// if 或 else 只能控制一条语句，想要执行多条语句时要带大括号{}，建议都带
//// else和离他最近的if匹配
//int main() {
//	int age = 0;
//	scnaf("%d", &age);
//	/*if (age >= 18) {// 单分支
//		printf("成年\n");
//	}*/
//
//	/*if (age >= 18) {// 双分支
//		printf("成年\n");
//	}
//	else {
//		printf("未成年\n");
//	}*/
//
//	if (age < 18) {// 多分支
//		printf("少年");
//	}
//	else if (age >= 18 && age < 26) {
//		printf("青年");
//	}
//	else if (age >= 26 && age < 40) {
//		printf("壮年");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("中年");
//	}
//	else if (age >= 60 && age < 100) {
//		printf("老年");
//	}
//	else {
//		printf("老不死");
//	}
//	return 0;
//}

//// 练习1：判断一个数是不是奇数
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == num % 2) {
//		printf("%d是奇数\n", num);
//	}
//	else {
//		printf("%d不是奇数\n", num);
//	}
//	return 0;
//}

//// 练习2：输出1-100之间的奇数
//int main() {
//	int i = 1;
//	//while (i <= 100) {// 循环100次
//	//	if (1 == i % 2) {// 判断是不是奇数
//	//		printf("%d ", i);
//	//	}
//	//	i++;// 更新i的值
//	//}
//
//	for (i = 1; i <= 100; i++) {
//		if (1 == i % 2) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


/* 分支语句switch */
//// 基本结构
//// switch(整形变量)
////     case(整形表达式):语句
//// switch语句使用时一般搭配break使用
//// break的作用是跳出switch语句（但非必须)
//// 需要注意的是，当没有遇到break之前，会执行break之前的所有case语句
//// default的使用，它通常用于case语句不存在的情况，一般用于警告提示输入错误
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	switch (n) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


/* 循环语句while */
// while(表达式)-表达式结果非0结束循环，否则执行循环
//     循环语句;
int main() {
	int i = 1;
	while (i <= 10) {
		//printf("%d ", i);// 打印1-10

		//// 在while循环中break的作用是永久终止循环
		//if (5 == i) {
		//	break;
		//}
		//printf("%d ", i);// 打印1-4

		// continue的作用是跳过本次循环其后代码，进行下一次判断是否进行下一次循环
		if (5 == i) {
			continue;
		}
		printf("%d ", i);//打印完1-4后死循环
		i++;
	}
	return 0;
}