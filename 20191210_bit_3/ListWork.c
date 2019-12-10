#include "ListWork.h"

void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl);
	assert(capacity > 0);
	psl->array = (SLDataType*)malloc(sizeof(SLDataType) * capacity);
	if (psl != NULL)
	{
		psl->capicity = capacity;
		psl->size = 0;
	}
	else
	{
		printf("初始化错误！\n");
	}
}

void SeqListDestory(SeqList* psl)
{
	assert(psl);
	free(psl->array);
	psl->capicity = 0;
	psl->size = 0;
}

void SeqListPrint(SeqList* psl)
{
	assert(psl);
	SeqList* printL = psl;
	size_t i = 0;
	while (i<psl->size)
	{
		printf("%d ", printL->array[i]);
		i++;
	}
	printf("\n");
}

void CheckCapacity(SeqList* psl)
{
	assert(psl);
	if (psl->size == psl->capicity)//满了
	{
		SLDataType* arrtest = (SLDataType*)realloc(psl->array, sizeof(psl->capicity) * 2);
		if (arrtest != NULL)
		{
			psl->array = arrtest;
			psl->capicity *= 2;
		}
	}
}

void SeqListPushBack(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	SeqList* cur = psl;
	psl->array[psl->size] = x;
	psl->size++;
}

void SeqListPopBack(SeqList* psl)
{
	assert(psl);
	if (psl->size > 0)
		psl->size--;
	else printf("顺序表为空\n");
}

void SeqListPushFront(SeqList* psl, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	size_t i = 0;
	while (i < psl->size)
	{
		psl->array[psl->size - i] = psl->array[psl->size - i - 1];

		i++;
	}
	if (psl->array[0] == psl->array[1])
	{
		//证明后移已经成功
		psl->array[0] = x;
		psl->size++;
	}
	else
	{
		printf("头插失败\n");
	}
}

void SeqListPopFront(SeqList* psl)
{
	assert(psl);
	size_t i = 0;
	while (i < psl->size)
	{
		psl->array[i] = psl->array[i + 1];
		i++;
	}
	psl->size--;
}

int SeqListFind(SeqList* psl, SLDataType x)//返回下标；
{
	assert(psl);
	size_t i = 0;
	while (i < psl->size)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
		else
		{
			i++;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	assert(psl);
	CheckCapacity(psl);
	size_t i = psl->size;
	assert(pos < i);
	while (pos != i)
	{
		psl->array[i] = psl->array[i - 1];

		i--;
	}
	psl->array[pos] = x;
	psl->size++;
}

void SeqListErase(SeqList* psl, size_t pos)
{
	assert(psl);
	size_t i = psl->size;
	while (i > pos)
	{
		psl->array[pos] = psl->array[pos + 1];
		pos++;
	}
	psl->size--;
}

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode != NULL)
	{
		newnode->data = x;
		newnode->next = NULL;
	}
	return newnode;
}

void SListPrint(SListNode* plist)
{
	assert(plist);
	SListNode* cur = plist;
	if (cur)
	{
		printf("%d->", plist->data);
		cur = cur->next;
	}
	printf("\n");
}

void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* cur = *pplist;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = newnode;
}

void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newhead = BuySListNode(x);
	newhead->next = *pplist;
	*pplist = newhead;
}

void SListPopBack(SListNode** pplist)
{
	SListNode* prev = *pplist;
	if (prev->next == NULL)
	{
		free(prev);
	}
	else
	{
		while (prev->next->next != NULL)
		{
			prev = prev->next;
		}
		SListNode* del = prev->next;
		free(del);
		prev->next = NULL;
	}
	
}

void SListPopFront(SListNode** pplist)
{
	if (*pplist != NULL)
	{
		SListNode* cur = *pplist;
		*pplist = (*pplist)->next;
		free(cur);
	}
}

SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode *cur = plist;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next != NULL)
	{
		SListNode* del = pos->next;
		pos->next = del->next;
		free(del);
	}
}

void SListDestory(SListNode* plist)
{
	SListNode* cur = plist;
	while(cur != NULL)
	{
		SListNode* del = cur;
		cur = cur->next;
		free(del);
	}
	plist = NULL;
}
