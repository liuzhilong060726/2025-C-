#pragma once
// 顺序表练习

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <malloc.h>
typedef int SLDateType;

// 结构体定义
typedef struct SepList
{
	SLDateType* a;
	int size;
	int capacity;
}SL;
// 结构体初始化
void SLInit(SL* ps);
// 打印
void SLprint(SL* ps);
// 空间扩容
void SLCheckcapacity(SL* ps);
// 空间释放
void SLDestory(SL* ps);
// 后插后删
void SeqListPushBack(SL* ps, SLDateType x);
void SeqListPushFront(SL* ps);
// 前插前删
void SeqListPopBack(SL* ps, SLDateType x);
void SeqListPopFront(SL* ps);
// 中间插入 中间删除
void SeqListMidBack(SL* ps, int pos, SLDateType x);
void SeqListMidFront(SL* ps, int pos);
// 查找
int SeqListFind(SL* ps, SLDateType x);