#pragma once
// ������

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SListDate;

// �ṹ�嶨��
typedef struct SListNode
{
	SListDate date;
	struct SListNode* next;
}SLN;


// ��ӡ
void SListPrint(SLN* phead);
// ����ɾ
void SListPushBack(SLN** pphead, SListDate x);
void SListPopBack(SLN** pphead);
// ǰ��ǰ��
void SListPushFront(SLN** pphead, SListDate x);
void SListPopFront(SLN** pphead);
// ����
SLN* SListFind(SLN* phead, SListDate x);
// �м����
void SListPushMid(SLN** pphead, SLN* pos, SListDate x);
void SListPopMid(SLN** pphead, SLN* pos);