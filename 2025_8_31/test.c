#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"

void Test()
{
	SLN* head = NULL;

	// ����ɾ
	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	SListPushBack(&head, 4);

	SListPopBack(&head);
	SListPopBack(&head);
	SListPopBack(&head);
	SListPopBack(&head);
	SListPopBack(&head);

	SListPrint(head);
	// ǰ��ǰɾ
	SListPushFront(&head, 0);
	SListPushFront(&head, -1);
	SListPushFront(&head, -2);
	SListPushFront(&head, -3);
	SListPushFront(&head, -4);

	SListPopFront(&head);
	SListPopFront(&head);
	SListPopFront(&head);
	SListPopFront(&head);
	SListPopFront(&head);
	SListPopFront(&head);

	SListPrint(head);
}

void Test2()
{
	SLN* head = NULL;

	SListPushBack(&head, 1);
	SListPushBack(&head, 2);
	SListPushBack(&head, 3);
	// ����
	SLN* pos = SListFind(head, 2);
	// �м�����м�ɾ��
	SListPushMid(&head, pos, 20);
	SListPushMid(&head, pos, 10);

	SListPopMid(&head,pos);

	SListPrint(head);

}

int main()
{
	//Test();
	Test2();
	return 0;
}