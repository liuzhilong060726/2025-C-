#pragma once
// 单链表

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SListDate;

// 结构体定义
typedef struct SListNode
{
	SListDate date;
	struct SListNode* next;
}SLN;


// 打印
void SListPrint(SLN* phead);
// 后插后删
void SListPushBack(SLN** pphead, SListDate x);
void SListPopBack(SLN** pphead);
// 前插前插
void SListPushFront(SLN** pphead, SListDate x);
void SListPopFront(SLN** pphead);
// 查找
SLN* SListFind(SLN* phead, SListDate x);
// 中间插入
void SListPushMid(SLN** pphead, SLN* pos, SListDate x);
void SListPopMid(SLN** pphead, SLN* pos);