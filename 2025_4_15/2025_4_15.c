#define _CRT_SECURE_NO_WARNINGS

/* 刘志龙 */
/* 2025/4/15 */

/* C语言初阶 */
#include <stdio.h>

/* 操作符详解 */

//// 下标引用操作符 - []
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[4]);// 操作数有两个：arr 4
//
//	return 0;
//}

//// 函数调用操作符
//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);// () - 函数调用操作符，没有括号说明不是函数
//	printf("%d", ret);
//	return 0;
//}

//// 结构成员访问操作符
//// 结构体变量名.成员名
//// 结构体指针变量名->成员名
//struct Book {
//	char name[20];
//	char author[20];
//	char ISBN[20];
//};
//int main() {
//	struct Book b = { "红楼梦", "曹雪芹", "9787101001700" };
//	struct Book* pb = &b;
//	// 三种表示方法
//	printf("%s\t%s\t%s\n", (*pb).name, (*pb).author, (*pb).ISBN);// 先对指针解引用再访问其成员
//	printf("%s\t%s\t%s\n", pb->name, pb->author, pb->ISBN);// 直接通过地址访问成员
//	printf("%s\t%s\t%s\n", b.name, b.author, b.ISBN);// 通过变量名访问成员
//	return 0;
//}



/* 表达式求值 */

//// 整型提升
//// 它在特定情况下自动将较小的整数类型提升为int或unsigned int类型
//// 在表达式中使用小于int的类型（如char、short）时
//// 当这些类型作为参数传递给可变参数函数（如printf）时
//// 在按位运算、算术运算等操作中
//// 如果原始类型的所有值都可以用int表示，则提升为int，否则提升为unsigned int
//// 提升时，最高位是什么补什么
//int main() {
//	char a = 3;
//	// 00000011
//	// 00000000000000000000000000000011 - 提升
//	char b = 127;
//	// 01111111
//	// 00000000000000000000000001111111 - 提升
//	char c = a + b;// a和b先被提升为int，相加后再截断为char
//	// 00000000000000000000000010000010 - 相加
//	// 10000010 - 截断
//	// 11111111111111111111111110000010 - 提升（补码）
//	// 10000000000000000000000001111101 - 反码
//	// 10000000000000000000000001111110 - 原码（-126）
//	printf("%d\n", c);// c先提升为int，再打印结果
//
//	char d = 1;
//	printf("%u\n", sizeof(d));//1
//	printf("%u\n", sizeof(+d));//4 - 整形提升
//	printf("%u\n", sizeof(-d));//4
//	printf("%u\n", sizeof(!d));//1 （gcc - 4）
//
//	return 0;
//}

//// 算术转换 - 在整型提升后进行
//// 如果任一操作数是long double，则另一个转换为long double
//// 否则，如果任一操作数是double，则另一个转换为double
//// 否则，如果任一操作数是float，则另一个转换为float
//// 否则，对整数类型进行以下转换：
////		如果两个操作数有相同的符号性（都带符号或都不带符号），则较低等级的类型转换为较高等级的类型
////		如果无符号操作数的等级高于或等于带符号操作数，则带符号操作数转换为无符号操作数的类型
////		如果带符号类型可以表示无符号类型的所有值，则无符号操作数转换为带符号操作数的类型
////		否则，两个操作数都转换为带符号类型对应的无符号类型
//int main() {
//	int a = 1;
//	float b = a + 2.0;// 在这个过程中就发生了算术转换
//	printf("%f", b);
//	return 0;
//}

// 操作符的属性
// 常见优先级（从高到低）：
// () [] -> .		// 括号、下标、成员访问
// ! ~ ++ -- + -* & (type) sizeof  // 一元操作符
// * / %			// 乘除取模
// +-				// 加减
// << >>			// 位移
// < <= > >=		// 关系操作符
// == !=			// 相等性操作符
// &				// 按位与
// ^				// 按位异或
// |				// 按位或
// &&				// 逻辑与
// ||				// 逻辑或
// ? :				// 条件操作符
// = += -= *= /= %= &= ^= |= <<= >>=  // 赋值操作符
// ,				// 逗号操作符




/* 指针初阶 */

//// 指针类型的意义 - 内存访问的精确控制
//// 指针类型告诉编译器：
//// 指向的数据类型：如int* 指向整数，char* 指向字符
//// 数据大小：决定了指针算术运算时的步长，解引用时权限有多大
//int main() {
//	//int a = 0x11223344;
//	////int* p = &a;
//	//char* p = &a;
//	//*p = 0;
//
//	int arr[5] = { 0 };
//	int* p = arr;
//	//p++;  // 移动sizeof(int)字节（通常是4字节）
//
//	char* c = (char*)arr;
//	//c++;  // 移动1字节
//	printf("%p\n", p);// 004FF778
//	printf("%p\n", p + 1);// 004FF77C - 跳过四个字节
//	printf("%p\n", c);// 004FF778
//	printf("%p\n", c + 1);// 004FF779 - 跳过一个字节
//	return 0;
//}

//// 野指针 - 指向无效内存地址的指针
//// 1.已被释放的内存（如free()后的指针）
//// 2.超出作用域的局部变量（如函数返回后指向栈变量的指针）
//// 3.未初始化的指针
//// 4.指针的越界访问
//// 防范措施：
//// 1.释放后使置NULL
//// 2.避免返回局部变量的指针
//// 3.初始化指针为NULL
//// 4.使用前检查是否为NULL
////int* test() {
////	int a = 10;
////	return &a;// 返回局部变量地址（错误）
////}
//int main() {
//	//int* ptr = malloc(sizeof(int));
//	//*ptr = 100;
//	//free(ptr);  // 内存被释放，ptr 变成野指针
//	//printf("%d", *ptr);  // 危险！访问已释放的内存
//
//	//int* p = test();
//	//printf("%d", *p);// 危险！a 已被销毁
//
//	//int* p;// 未初始化，为随即地址
//	//printf("%d", *p);// 危险！访问未知内存
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*p = i;
//		p++;// 危险！会越界访问到数组外的地址
//	}
//	return 0;
//}

//// 指针运算
//// 指针加减整数 - 移动的字节数取决于指针类型
//// 指针减指针 - 计算两个指针之间的元素个数
//int my_strlen(char* p) {
//	char* s = p;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - s;
//}
//int main() {
//	//int arr[5] = { 1,2,3,4,5 };
//	//int* p = arr;
//	//p = p + 2;// 移动 2*sizeof(int) 字节，指向 arr[2]
//	//printf("%d", *p);// 3
//
//	//int arr[5] = { 1,2,3,4,5 };
//	//int px = arr[0];
//	//int py = arr[4];
//	//printf("%d", py - px);// 4
//
//	char str[] = "abc";
//	int len = my_strlen(str);
//	printf("%d", len);
//
//	return 0;
//}