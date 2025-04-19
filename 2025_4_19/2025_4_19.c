#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/19 */

/* C语言初阶 */
#include <stdio.h>

/* 练习 */
//// 1.数一个数的二进制中1的个数
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

//// 2.两个二进制位不同位的个数
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
//	int ret = a ^ b;// 相同为0，不同为1
//	int count = number_count(ret);
//
//	printf("%d", count);
//	return 0;
//}

//// 3.获取一个数二进制位所有奇数和偶数
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	// 打印奇数位
//	for (i = 31; i >= 1; i -= 2) {
//		printf("%d ", 1 & (n >> i));
//	}
//	printf("\n");
//	// 打印偶数位
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", 1 & (n >> i));
//	}
//
//	return 0;
//}

//// 4.不创建临时变量，交换两个数的值
//int main() {
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d", a, b);
//	return 0;
//}

//// 5.判断一个数是不是2的n次方
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
//		printf("是2的n次方\n");
//	}
//	else {
//		printf("不是2的n次方\n");
//	}
//	return 0;
//}

//// 小端存储
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		// short*可以控制2个字节大小空间
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);// 0 0 3 4 5
//	}
//	return 0;
//}



/* 初阶测评 */

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
//		printf("%2d", i++);// 死循环
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

//// 7.求两个数的最小公倍数
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	// 试除法
//	/*int m = a > b ? a : b;
//	int i = 0;
//	for (i = m; ; i++) {
//		if (i % a == 0 && i % b == 0) {
//			printf("%d", i);
//			break;
//		}
//	}*/
//	// 改进版试除法
//	/*int i = 0;
//	for (i = 1; ; i++) {
//		if ((a * i) % b == 0) {
//			printf("%d", a * i);
//			break;
//		}
//	}*/
//	// 辗转相除法 + 最小公倍数计算方法
//	int c = 0;
//	int m = a * b;
//	while (b) {// 求最大公因子
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	m /= a;// 最小公倍数 = 两数成绩 / 最大公因子
//	printf("%d", m);
//	return 0;
//}

// 8.高级字符串逆序
// 要求：将I like beijing.转换成beijing. like I
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
	// 不能用scanf来读取，因为中间有空格
	//scanf("%s", arr);

	// 输入
	gets(arr);

	// 全部逆序
	int len = strlen(arr);
	reverse(arr, arr + len - 1);// 传入字符串首元素地址，和最后一个元素地址
	//printf("%s", arr);// 测试功能
	
	// 部分逆序（对各个单词进行逆序）
	char* start = arr;
	while (*start) { //当遇到'\0'时跳出循环
		char* end = start;// 找单词末尾
		while (*end != '\0' && *end != ' ') {
			end++;
		}
		// end会停在单词下一个地址
		reverse(start, end - 1);// 逆序单词
		// 如果没到句子结束就继续逆序
		if(*end == ' ')
			start = end + 1;
		else {// 不是' '说明已经到了句子末尾，且此时end存放的是'\0'的地址
			start = end;
		}
	}
	printf("%s", arr);
	return 0;
}