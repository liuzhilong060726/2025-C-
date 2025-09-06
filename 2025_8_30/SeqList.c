#define _CRT_SECURE_NO_WARNINGS

#include "SeqList.h"

// ��ʼ��
void SLInit(SL* ps)
{
	assert(ps);

	ps->size = 0;
	ps->capacity = 4;
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * ps->capacity);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ�ܣ�");
		exit(-1);
	}
}
// ��ӡ
void SLprint(SL* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
// �ռ�����
void SLCheckcapacity(SL* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->a = (SLDateType*)realloc(ps, sizeof(SLDateType) * ps->capacity * 2);
	}
	if (ps == NULL)
	{
		printf("����ռ�ʧ�ܣ�");
		exit(-1);
	}
}
// �ռ�ע��
void SLDestory(SL* ps)
{
	assert(pss);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
// ����ɾ
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
// ǰ��ǰɾ
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
// �м���� �м�ɾ��
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

// ����
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