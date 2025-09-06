#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"

// 打印
void SListPrint(SLN* phead)
{
	SLN* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("NULL\n");
}

// 创建节点
SLN* BuyNode(SListDate x)
{
	SLN* newNode = (SLN*)malloc(sizeof(SLN));
	if (newNode == NULL)
	{
		printf("分配内存失败！");
		exit(-1);
	}
	newNode->date = x;
	newNode->next = NULL;
	return newNode;
}

// 后插后删
void SListPushBack(SLN** pphead, SListDate x)
{
	assert(pphead);
	// 创建新节点
	SLN* newNode = BuyNode(x);

	// 插入
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SLN* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
void SListPopBack(SLN** pphead)
{
	// 没有节点
	if (*pphead == NULL)
	{
		return;
	}
	// 有一个节点
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	// 有一个以上节点
	else
	{
		SLN* tail = *pphead;
		SLN* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
}

// 前插前删
void SListPushFront(SLN** pphead, SListDate x)
{
	assert(pphead);
	SLN* newNode = BuyNode(x);
	newNode->next = *pphead;
	*pphead= newNode;
}
void SListPopFront(SLN** pphead)
{
	assert(pphead);
	if ((*pphead) == NULL)
	{
		return;
	}
	else
	{
		SLN* prev = *pphead;
		*pphead = (*pphead)->next;
		free(prev);
	}
}

// 查找
SLN* SListFind(SLN* phead, SListDate x)
{
	assert(phead);
	SLN* pos = phead;
	while (pos->date != x)
	{
		pos = pos->next;
		if (pos == NULL)
		{
			break;
		}
	}
	return pos;
}

// 中间插入中间删除
void SListPushMid(SLN** pphead, SLN* pos, SListDate x)
{
	assert(pphead);
	assert(pos);
	SLN* newNode = BuyNode(x);
	newNode->next = pos->next;
	pos->next = newNode;
}
void SListPopMid(SLN** pphead, SLN* pos)
{
	assert(pphead);
	assert(pos);
	SLN* next = pos->next;
	pos->next = next->next;
	free(next);
}