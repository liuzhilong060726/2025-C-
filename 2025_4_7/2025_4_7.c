#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/7 */

/* C语言初阶 */
#include <stdio.h>

/* 循环语句while */
//int main() {
//	//int ch = getchar();// 获取一个字符或者整形
//	////printf("%c", ch);
//	//putchar(ch);// 输出一个字符
//
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) {// 循环一直进行， ctrl+z结束
//	//	putchar(ch);// 每循环一次打印一次
//	//}
//
//	//char password[20] = { 0 };
//	//printf("请输入密码：>");
//	//scanf("%s", password);// 不能很好的处理空格字符，遇到空格读取结束
//	//int tmp = 0;
//	//while ((tmp = getchar()) != '\n') {// 清理缓冲区的多个字符
//	//	;
//	//}
//	//printf("请确认：(Y/N)>");
//	//int ch = getchar();
//	//printf("成功");
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;// 不是数字跳过打印
//		putchar(ch);// 打印数字
//	}
//	return 0;
//}



/* 循环语句for */
//// for(表达式一;表达式二;表达式三)
////     循环语句;
//// 不可再循环内部调整循环变量，防止其实失去控制
//// 建议for循环循环控制变量取值采取“前闭后开区间”写法
//int main() {
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {// 循环10次
//	//	printf("%d", i + 1);// 打印1-10
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
//	//// for循环变种
//	//// 判断部分省略，判断部分恒为真
//	//// 不建议随便省略
//	//for (;;) {
//	//	printf("hehe");
//	//}
//	//int i = 0;
//	//int j = 0;
//	//for (; i < 3; i++) {
//	//	for (; j < 3; j++) {
//	//		printf("hehe\n");// 打印三次
//	//		//执行完一遍后j=3下次不会再进入循环
//	//	}
//	//}
//
//	//// 变种
//	//int x = 0;
//	//int y = 0;
//	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//	//	printf("hehe\n");
//	//}
//
//	// 笔试题
//	int x = 0;
//	int k = 0;
//	// 循环执行0次
//	for (x = 0, k = 0; k = 0; x++, k++)// 注意判断部分对k是赋值而不是判断是否相等
//		k++;
//
//	return 0;
//}



/* 循环语句do-while */
// 进入循环后至少执行一次
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
//	//	printf("%d ", i);// 打印完1-4后死循环，原因是i的值不再发生改变
//	//	i++;
//	//} while (i <= 10);
//
//	int i = 1;
//	do {
//		if (5 == i) {
//			break;
//		}
//		printf("%d ", i);// 打印完1-4后跳出循环
//		i++;
//	} while (i <= 10);// 条件判断，为真继续循环
//	return 0;
//}


/* 练习 */
//// 1.计算n的阶乘
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int num = 1;
//	int i = 1;
//	for (i = 1; i <= n; i++) {
//		num *= i;// 计算阶乘
//	}
//	printf("%d的阶乘是%d", n, num);
//	return 0;
//}

//// 2.计算1!+2!+...+10!
//int main() {
//	int n = 10;
//	int sum = 0;// 用来统计几个数阶乘的和
//	int	num = 1;
//	//int i = 1;
//	//int j = 1;
//	//for (i = 1; i <= n; i++) {
//	//	num = 1;// 每次更新num的值，用来统计下一个数的阶乘
//	//	for (j = 1; j <= i; j++) {
//	//		num *= j;
//	//	}
//	//	sum += num;
//	//}
//
//	// 改进
//	// n! = (n - 1) * n
//	int i = 1;
//	for (i = 1; i < n; i++) {
//		num *= i;
//		sum += num;
//	}
//	printf("%d", sum);
//	return 0;
//}

//// 3.在一个有序数组中找一个数字n（二分查找）
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int lift = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int found = -1;// 用于标记是否找到，-1 表示未找到
//	while (lift <= right)
//	{
//		mid = (lift + right) / 2;// 确定中间值
//		if (arr[mid] == n) {
//			found = mid;// 确定下标
//			break;// 找到后就结束循环
//		}
//		else if (arr[mid] > n) {
//			right = mid - 1;// 更新右下标
//		}
//		else {
//			lift = mid + 1;// 更新做下标
//		}
//	}
//	if (found != -1) {
//		printf("找到了，下标是%d", found);
//	}
//	else {
//		printf("没找到");
//	}
//	return 0;
//}