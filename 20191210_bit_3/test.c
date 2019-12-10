#include"ListWork.h"


void test1()
{
	/*SeqList SeqList;
	SeqListInit(&SeqList,2);
	SeqListPushBack(&SeqList, 1);
	SeqListPushBack(&SeqList, 2);
	SeqListPushBack(&SeqList, 3);
	SeqListPrint(&SeqList);
	SeqListPopBack(&SeqList);
	SeqListPopBack(&SeqList);
	SeqListPopBack(&SeqList);
	SeqListPrint(&SeqList);*/

	SeqList SeqList;
	SeqListInit(&SeqList, 2);
	SeqListPushFront(&SeqList, 1);
	SeqListPushFront(&SeqList, 2);
	SeqListPushFront(&SeqList, 3);
	SeqListPrint(&SeqList);
	/*SeqListPopFront(&SeqList);
	SeqListPopFront(&SeqList);
	SeqListPopFront(&SeqList);
	SeqListPrint(&SeqList);*/
	int i = SeqListFind(&SeqList, 3);
	printf("%d\n", i);
	SeqListInsert(&SeqList, 1, 9);
	SeqListPrint(&SeqList);
	SeqListErase(&SeqList, 1);
	SeqListPrint(&SeqList);
}
void Fun(SListNode ** L)
{
	SListNode* Q = (SListNode*)malloc(sizeof(SListNode));
	Q->data = 1;
	Q->next = NULL;
	*L = Q;

	//如果不要返回值的话必须向函数中传入二级指针，二级指针就可以改变一级指针指向的地址，不然原参数不改变；
}

void test2()
{
	SListNode* SLNode;
	Fun(&SLNode);
	printf("%d", SLNode->data);
}
int main()
{
	test2();
	return 0;
}