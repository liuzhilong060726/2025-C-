#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/8 */

/* C语言初阶 */
#include <stdio.h>

/* 循环结构练习 */
//// 4.编写代码，演示多个字符从两端移动，向中间汇聚
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
//		system("cls");// 清屏操作
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//// 5.验证密码正确性，只有三次机会
//#include <string.h>
//int main() {
//	char password[] = { 0 };
//	int i = 0;
//	while (i < 3) {
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {
//			printf("登陆成功\n");
//			break;
//		}
//		else {
//			printf("登陆失败，你还有%d次机会\n", 3 - i - 1);
//		}
//		i++;
//	}
//	return 0;
//}

/* 猜数字游戏 */
//#include <time.h>
//#include <stdlib.h>
//void Menu() {
//	printf("****** 1.Play ******\n");
//	printf("****** 0.exit ******\n");
//}
//void game() {
//	int num = 0;
//	// 生成1-100的随机数
//	// 由于rand()生成的随机数是1-32767，对其模100后范围是0-99，再加1范围就变成1-100
//	int ret = rand() % 100 + 1;
//	int count = 0;// 计数器
//	// 判断输入是否相等
//	do {
//		count++;
//		// 猜数字
//		printf("请猜测:>");
//		scanf("%d", &num);
//		if (num == ret) {
//			break;
//		}
//		else if (num < ret) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("猜大了\n");
//		}
//	} while (num != ret);
//	printf("猜对了，猜了%d次\n", count);
//}
//int main() {
//	//生成时间戳
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	// 只要玩家不主动退出，游戏就不会结束
//	while (1) {
//		// 打印菜单
//		Menu();
//		// 输入
//		printf("请选择:>");
//		scanf("%d", &input);
//		// 选择进入
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			return 0;
//		default:
//			printf("输入格式错误，请重新输入\n");
//			break;
//		}
//	}
//	return 0;
//}


///* 给三个数排序 */
//void swap(int* px, int* py) {
//	int temp = *px;// 交换指针所指向的内容
//	*px = *py;
//	*py = temp;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		swap(&a, &b);// 将地址传给函数，这样才能改变实参
//	}
//	if (a < c) {
//		swap(&a, &c);
//	}
//	if (b < c) {
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);// 一次从大到小打印
//	return 0;
//}


/* 打印1-100之间3的倍数 */
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


/*  求两个数的最大公因数 */
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//// 方法一:列举法，从两个数最小的一个开始检验是否能被两个数整除
//	//// 然后依次减1，知道找到为止
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
//	//printf("最大公约数是%d", min);
//
//	// 方法二：辗转相除法
//	int c = 0;
//	int m = a;
//	int n = b;
//	while (c = a % b) {
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d\n", b);
//
//	// 最小公倍数=两个数的乘积*最大公约数
//	printf("最小公倍数是%d\n", m * n / b);
//
//	return 0;
//}


/* 打印1000年到2000年之间的闰年 */
//// 能被4整除，不能被100整除，或者是能被400整除的是闰年
//int main() {
//	int i = 0;
//	for (i = 1000; i < 2000; i++) {// 获取1000-2000的数字
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {// 判定条件
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

/* 打印100-200 之间的素数 */
//// 只能被自己和1整除的数是素数
//#include <math.h>
//int Is_Sushu(int n) {
//	int i = 0;
//	int fount = 1;
//	//for (i = 2; i < n; i++) {
//	//	if (n % i == 0) {
//	//		fount = 0;// 如果能被其他数整除返回0
//	//		break;
//	//	}
//	//}
//
//	// 一个数可以被写成（一个较小的数）*（一个较大的数），或者是一个数的平方
//	// 所以只需要知道在这个数开根号之前的数有没有能整除他的就能判断他是不是素数
//	for (i = 2; i <= sqrt(n); i++) {// sqrt()是求一个数的开根号值
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
//		if (Is_Sushu(i)) {// 返回非0表示是素数
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


/* goto语句 */
//// 最常见的用法是跳出多重循环，其他场景不推荐使用
//// 只能在一个函数中运行，不能跨函数操作
//int main() {
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;// 循环打印hehe，haha无法跳出
//	
//	return 0;
//}



/* 关机程序 */
//#include <string.h>
//#include <stdlib.h>
//int main() {
//	char arr[20] = {0};
//	// 关机
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("你的电脑将在60秒后关机，如果想取消，请输入:我是猪\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



/* 函数 */

/* 库函数 */
//// IO函数：printf  getchar
//// 字符串操作函数：strcmp  strlen
//// 字符操作函数：toupper
//// 内存操作函数：memcmp  memset  memcpy
//// 时间/日期函数：time
//// 数学函数：sqrt  pow
//// 其他库函数：
//#include <string.h>
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello world!";
//
//	//// strcopy函数学习
//	//strcpy(arr1, arr2);//将arr2拷贝到arr1上
//	//printf("%s", arr1);
//
//	// memset函数学习
//	// 基本结构
//	// mem(void* ptr, int value, size_t num)
//	memset(arr2, 'x', 5);// 就是将arr2内前5个字符换成'x'
//	printf("%s", arr2);
//
//	return 0;
//}


/* 自定义函数 */
// 函数的基本结构
// 函数名，函数返回类型，函数参数，函数体

//// 自己创建一个函数求两个数最大值
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

// 创建一个函数交换两个数的值
// 当一个函数不需要返回值时，返回类为void
// 实际参数-实参：向函数传递的值，可以是常量，变量，表达式（可以计算出结果的），函数（可以计算出结果的）
// 形式参数—形参：用来接收传递参数的，调用函数时创建，出函数时销毁
// 形参只是实参的一份临时拷贝，形参的改变不会影响实参
// 传值调用：形参和实参占有不同的内存，对形参的改变不影响实参
// 传址调用：把函数外部创建变量的地址传给函数参数的一种调用方式
// 这种调用会将函数和函数外部的变量联系起来，也就是函数内部直接就可以操作函数外部的变量
void Swap1(int x, int y) {// 传值调用
	int t = x;
	x = y;
	y = t;
}
void Swap2(int* pa, int* pb) {// 传址调用
	// 指针变量解引用后，再交换,其对应地址的值也会发生改变
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
int main() {
	int a = 10;
	int b = 20;
	Swap1(a, b);// 传值
	printf("a = %d, b = %d\n", a, b);// 结果是a = 10, b = 20不符合预期
	Swap2(&a, &b);// 传址
	printf("a = %d, b = %d\n", a, b);// 结果是a = 20, b = 10符合预期
	return 0;
}