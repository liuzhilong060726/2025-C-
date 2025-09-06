#define _CRT_SECURE_NO_WARNINGS

#include "SeqList.h"

void TestSL() {
	// 定义
	SL s;
	// 初始化
	SLInit(&s);
	// 后插
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SLprint(&s);
	// 后删
	SeqListPushFront(&s);
	SLprint(&s);
	// 前插
	SeqListPopBack(&s, -1);
	SeqListPopBack(&s, -2);
	SeqListPopBack(&s, -3);
	SeqListPopBack(&s, -4);
	SLprint(&s);
	// 前删
	SeqListPopFront(&s);
	SLprint(&s);
	// 中间插入
	SeqListMidBack(&s, 3, 0);
	SLprint(&s);
	// 中间删除
	SeqListMidFront(&s, 3);
	SLprint(&s);

	// 查找
	int pos = SeqListFind(&s, 2);
	SeqListMidFront(&s, pos);
	SLprint(&s);

	//空间释放
	SLDestory(&s);
}

// 主函数
int main()
{
	// 调用删减函数
	TestSL();

	return 0;
}