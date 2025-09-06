#define _CRT_SECURE_NO_WARNINGS

#include "SeqList.h"

// 初始化
void SLInit(SL* ps)
{
	assert(ps);

	ps->size = 0;
	ps->capacity = 4;
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * ps->capacity);
	if (ps->a == NULL)
	{
		printf("分配内存失败！");
		exit(-1);
	}
}
// 打印
void SLprint(SL* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
// 空间扩容
void SLCheckcapacity(SL* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->a = (SLDateType*)realloc(ps, sizeof(SLDateType) * ps->capacity * 2);
	}
	if (ps == NULL)
	{
		printf("申请空间失败！");
		exit(-1);
	}
}
// 空间注销
void SLDestory(SL* ps)
{
	assert(pss);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
// 后插后删
void SeqListPushBack(SL* ps, SLDateType x)
{
	assert(ps);
	SLCheckcapacity(ps);
	ps->capacity *= 2;
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SL* ps)
{
	assert(ps);
	ps->size--;
}
// 前插前删
void SeqListPopBack(SL* ps, SLDateType x)
{
	assert(ps);
	SLCheckcapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
// 中间插入 中间删除
void SeqListMidBack(SL* ps, int pos, SLDateType x)
{
	assert(ps);
	SLCheckcapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
	SLReleasseCapacity(ps)
}
void SeqListMidFront(SL* ps, int pos)
{
	assert(ps);
	int start = pos;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}

// 查找
int SeqListFind(SL* ps, SLDateType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (x == ps->a[i])
		{
			return i;
		}
	}
	return -1;
}