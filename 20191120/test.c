#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int setbits(unsigned int x, int p, int  n, unsigned int y);
int main()
{
	//int numb = 2;
	//0000 0000 0000 0000 0000 0000 0000 0010
	//printf("%d ",getbits((unsigned)numb,1,2));
	printf("%d ", setbits((unsigned)4, 1, 2, 3));
	//printf("%d",6&-8);
	return 0;
}
/* ����x�д�pλ��ʼ��nλ */
/* ��Ȩ����С��ʼ��0~31�� */
/*unsigned getbits(unsigned x, int p, unsigned int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
	//(p+1-n)	1
	//(x>>)		0000 0000 0000 0000 0000 0000 0000 0001
	//~0		1111 1111 1111 1111 1111 1111 1111 1111
	//(~0 << n)	1111 1111 1111 1111 1111 1111 1111 1100
	//~(~0 << n)0000 0000 0000 0000 0000 0000 0000 0011
	//&			0000 0000 0000 0000 0000 0000 0000 0001
}*/

/* ��x�д�pλ��ʼ��n��λ���ó�y�����ұߵ�n��λ */
int setbits(unsigned int x, int p, int  n, unsigned int y)
{
	return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}
















//typedef struct ListNode  ListNode;
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//	
//	ListNode* head = (ListNode*)malloc(sizeof(ListNode*));
//	ListNode* tail = head;
//	
//	// tail->next=NULL;
//	
//	if (l1->val == NULL)return l2;
//	if (l2->val == NULL)return l1;
//	
//	while ((l1->val != NULL) && (l2->val != NULL))
//	{
//		if (l1->val < l2->val)
//		{
//			tail->next = l1->val;
//			tail = tail->next;
//			l1 = l1->next;
//
//		}
//		else
//		{
//			tail->next = l2->val;
//			tail = tail->next;
//			l2 = l2->next;
//		}
//	}
//
//	return head;
//
//}