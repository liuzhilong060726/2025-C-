#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/9 */

/* C语言初阶 */
#include <stdio.h>

/* 函数 */

/* 练习 */
//// 1.判断一个数是不是素数
//#include <math.h>
//int Is_Sushu(int n) {
//	int i = 0;
//	int found = 1;// 默认是素数
//	for (i = 2; i <= sqrt(n); i += 2) {// 提高计算效率，素数不能是偶数（除2外），其小因子不能大于其开根号值
//		if (0 == n % i) {// 能否被整除
//			found = 0;// 不是素数，修改返回值
//			break;// 确定不是素数后就不用继续进行循环了
//		}
//	}
//	return found;
//}
//int main() {
//	int n = 0;
//	// 输入要判断的数字
//	scanf("%d", &n);
//	// 判断
//	if (Is_Sushu(n)) {
//		printf("%d是素数", n);
//	}
//	else {
//		printf("%d不是素数", n);
//	}
//	return 0;
//}

//// 2.判断是不是闰年
//// 一个函数不写返回类型默认是int类型
//int Is_Leap_year(int n) {
//	int value = 0;
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
//		value = 1;
//	}
//	return value;
// // // 直接返回
// // return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//	if (Is_Leap_year(year)) {
//		printf("%d是闰年", year);
//	}
//	else {
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}

//// 3.实现一个有序数组二分查找
//// 找到返回下标，找不到返回-1
//int binary_search(const int a[], int k, int s) {
//  // 不能在函数内部求数组大小，因为传过来的只有首元素的地址
//	int left = 0;
//	int right = s - 1;
//	int mid = 0;
//	int value = -1;
//	// 开始查找
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
//	int sz = sizeof(arr) / sizeof(arr[0]);// 求数组长度方便传给函数
//	int key = 17;
// // 数组arr传参实际上传的不是数组本身，仅仅传过去首元素的地址
//	if (-1 == binary_search(arr, key, sz)) {
//		printf("找不到\n");
//	}
//	else {
//		printf("找到了，下标是%d", binary_search(arr, key, sz));
//	}
//	return 0;
//}

//// 4.函数每调用一次，num加1
//void Add(int* p) {
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	Add(&num);// 只有传址才能改变实参
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}


/* 函数的嵌套调用和链式访问 */
//// 嵌套调用
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

//// 链式访问
//#include <string.h>
//int main() {
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	
//	//printf("%d\n", strlen("abc"));
//
//	//printf()的返回值是打印到屏幕上字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


/* 函数的声明和定义 */
//// 一个函数在调用之前必须声明
//// 声明必须放在调用函数之前，一般放在头文件当中，方便协作开发
//// 函数定义就是函数的主体，可以放在调用之后，但前提是已经声明过
//// 也可以放在函数调用之前，这样可以省略声明
//#include "Add.h"
//// int Add(int x, int y);// 函数声明，注意分号不可省略
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	return 0;
//}
//////函数定义
////int Add(int x, int y) {
////	return x + y;
////}


/* 函数递归 */
// 直接或间接调用自身的一种方法
// 将问题简化，将一个复杂的问题转化成与原问题相似的规模较小的问题求解
// 递归的两个必要条件：（满足也不一定正确）
// 1.必须有一个限制条件，当满足这个限制条件时递归不再继续
// 2.每次递归调用后，越来越接近这个限制条件
// 递归层次不能太深，不然容易栈溢出
// 练习-1
//void print(int n) {
//	if (n > 9) {// 限制位数小于1时结束调用，即结果大于9时结束调用
//		print(n / 10);// 减少位数
//	}
//	printf("%d ", n % 10);// 取出最后一位打印
//}
//int main() {
//	int num = 1234;
//	// 将这个数每一位一次打印出来
//	// print(123)
//	// print(12) 3
//	// print(1) 2 3
//	print(num);
//	return 0;
//}

// 练习-2
//// 模拟实现strlen()函数
////int my_strlen(char* str) {// 一般方法
////	int count = 0;// 计数器
////	while (*str != '\0') {
////		count++;
////		str++;// 地址向后移动
////	}
////	return count;
////}
//int my_strlen(char* str) {// 递归实现，不创建临时变量
//	// strlen("abc")
//	// 1 + strlen("bc")
//	// 1 + 1 + strlen("c")
//	// 1 + 1 + 1 + strlen('\0')
//	if (*str != '\0') {// 如果当前地址对应的字符不是'\0'，继续调用函数
//		return 1 + my_strlen(str + 1);// 调用一次函数返回值加1，地址要向后移动1位
//	}
//	else {// 如果字符串长度为0，直接返回0
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "abc";
//	// 求字符串长度
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

// 练习-3
//// 求n的阶乘（不考虑溢出）
//// 3！
//// 3 * 2!
//// 3 * 2 * 1!
//int Factorial(int n) {
//	if (0 != n) {
//		return n * Factorial(n - 1);
//	}
//	else {// 0的阶乘是1
//		return 1;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d的阶乘是%d", n, Factorial(n));
//	return 0;
//}

// 练习-4
//// 求第n个斐波那契数
//// 斐波那契数：1 1 2 3 5 8 13 21 34 55
//// 后一个数是前两个数的和（前两个除外都是1）
////int Fib(int n) {// 递归法-效率太低，重复大量计算
////	if (n <= 2) {
////		return 1;
////	}
////	else {
////		return Fib(n - 1) + Fib(n - 2);
////	}
////}
//int Fib(int n) {// 迭代法-效率更高
//	int a = 1;
//	int b = 1;
//	int c = 1;// 保证前两个数输出结果正确，都是1
//	while (n > 2) {// 第3个数开始才进入循环
//		c = a + b;// 统计前两个数的和
//		// 交换前两个数的值
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


/* 汉诺塔问题 */
//// 假设你有 3根柱子（A、B、C） 和 n个大小不同的盘子，盘子从小到大叠在A柱上，最大的在底下，最小的在顶上。
//// 目标：把所有盘子从A柱移动到C柱，规则是：
//// 1.每次只能移动一个盘子；
//// 2.移动过程中，大盘子不能压在小盘子上。
//// 起点from，终点to，辅助aux
//void hanoi(int n, char from, char to, char aux) {
//	int count = 0;
//	if (n == 1) {// 递归终止条件：只剩1个盘子时直接移动
//		count++;
//		printf("将盘子 %d 从 %c 移动到%c\n", n, from, to);
//		return;
//	}
//	// 第一步：将n-1个盘子从from移动到aux（用to作为辅助）
//	hanoi(n - 1, from, aux, to);
//	// 第二步：将第n个盘子移动到目标柱
//	count++;
//	printf("将盘子 %d 从 %c 移动到%c\n", n, from, to);
//	// 第三步：将n-1个盘子从aux移动到to（用from作为辅助）
//	hanoi(n - 1, aux, to, from);
//}
//int main() {
//	int n = 0;
//	printf("请输入盘子的数量：");
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}


/* 青蛙跳台阶问题 */
// 一只青蛙要跳上 n 级台阶，它每次可以跳1级或2级。
// 问：青蛙有多少种不同的方式可以跳完这 n 级台阶？
int jump(int n) {
	if (n == 1) {// 跳一级台阶只有1种方法
		return 1;
	}
	else if (n == 2) {// 跳两级台阶有2种方法
		return 2;
	}
	else {
		// 跳上 n 级的总方法数 = 跳上n-1级的方法数 + 跳上n-2级的方法数
		return jump(n - 1) + jump(n - 2);
	}
}
int main() {
	int n = 0;
	printf("请输入台阶数：");
	scanf("%d", &n);
	printf("有 %d 种跳法", jump(n));
	return 0;
}