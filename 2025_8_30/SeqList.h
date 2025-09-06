#pragma once
// ˳�����ϰ

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <malloc.h>
typedef int SLDateType;

// �ṹ�嶨��
typedef struct SepList
{
	SLDateType* a;
	int size;
	int capacity;
}SL;
// �ṹ���ʼ��
void SLInit(SL* ps);
// ��ӡ
void SLprint(SL* ps);
// �ռ�����
void SLCheckcapacity(SL* ps);
// �ռ��ͷ�
void SLDestory(SL* ps);
// ����ɾ
void SeqListPushBack(SL* ps, SLDateType x);
void SeqListPushFront(SL* ps);
// ǰ��ǰɾ
void SeqListPopBack(SL* ps, SLDateType x);
void SeqListPopFront(SL* ps);
// �м���� �м�ɾ��
void SeqListMidBack(SL* ps, int pos, SLDateType x);
void SeqListMidFront(SL* ps, int pos);
// ����
int SeqListFind(SL* ps, SLDateType x);