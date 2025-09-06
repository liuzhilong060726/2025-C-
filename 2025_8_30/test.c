#define _CRT_SECURE_NO_WARNINGS

#include "SeqList.h"

void TestSL() {
	// ����
	SL s;
	// ��ʼ��
	SLInit(&s);
	// ���
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SLprint(&s);
	// ��ɾ
	SeqListPushFront(&s);
	SLprint(&s);
	// ǰ��
	SeqListPopBack(&s, -1);
	SeqListPopBack(&s, -2);
	SeqListPopBack(&s, -3);
	SeqListPopBack(&s, -4);
	SLprint(&s);
	// ǰɾ
	SeqListPopFront(&s);
	SLprint(&s);
	// �м����
	SeqListMidBack(&s, 3, 0);
	SLprint(&s);
	// �м�ɾ��
	SeqListMidFront(&s, 3);
	SLprint(&s);

	// ����
	int pos = SeqListFind(&s, 2);
	SeqListMidFront(&s, pos);
	SLprint(&s);

	//�ռ��ͷ�
	SLDestory(&s);
}

// ������
int main()
{
	// ����ɾ������
	TestSL();

	return 0;
}