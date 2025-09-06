#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"

// ��ӡ
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

// �����ڵ�
SLN* BuyNode(SListDate x)
{
	SLN* newNode = (SLN*)malloc(sizeof(SLN));
	if (newNode == NULL)
	{
		printf("�����ڴ�ʧ�ܣ�");
		exit(-1);
	}
	newNode->date = x;
	newNode->next = NULL;
	return newNode;
}

// ����ɾ
void SListPushBack(SLN** pphead, SListDate x)
{
	assert(pphead);
	// �����½ڵ�
	SLN* newNode = BuyNode(x);

	// ����
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
	// û�нڵ�
	if (*pphead == NULL)
	{
		return;
	}
	// ��һ���ڵ�
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	// ��һ�����Ͻڵ�
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

// ǰ��ǰɾ
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

// ����
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

// �м�����м�ɾ��
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