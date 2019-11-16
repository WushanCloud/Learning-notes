#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#if 0
//输入一个链表，输出该链表中倒数第k个结点。
typedef struct ListNode
{
	int data;
	struct ListNode* next;
}Node;
Node* FindKthToTail(Node* pListHead, unsigned int k) {
	if (pListHead == NULL) 
		return pListHead;
	//判断k的合法性
	int count = 0;
	ListNode* cur = pListHead;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	if (k<1 || k>count)
		return nullptr;

	Node* quick = pListHead;
	Node* slowly = pListHead;
	k--;
	while (k > 0)
	{
		quick = quick->next;
		k--;
	}
	while (quick->next != NULL)
	{
		quick = quick->next;
		slowly = slowly->next;
	}
	return slowly;
}
int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	n1->data = 1;
	Node* n2 = (Node*)malloc(sizeof(Node));
	n2->data = 2;
	Node* n3 = (Node*)malloc(sizeof(Node));
	n3->data = 3;

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	FindKthToTail(n1, 3);
	//Node* m1 = (Node*)malloc(sizeof(Node));
	//m1->data = 1;
	//Node* m2 = (Node*)malloc(sizeof(Node));
	//m2->data = 1;


	return 0;
}
#endif
#if 0

//将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
//
//示例：
//
//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4

struct ListNode {
	int val;
	struct ListNode* next;
};
typedef struct ListNode Node;

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;
	Node* newhead = (Node*)malloc(sizeof(Node));
	newhead->next = NULL;
	Node* curhead = newhead;//新链表的移动指针
	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			curhead->next = l1;
			l1 = l1->next;
		}
		else
		{
			curhead->next = l2;
			l2 = l2->next;
		}
		curhead = curhead->next;//要注意更新curhead
	}
	if (l1 == NULL)
	{
		curhead->next = l2;
	}
	else
	{
		curhead->next = l1;
	}
	curhead = newhead->next;
	free(newhead);
	return curhead;//不要头结点
}
int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node* n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node* n3 = (Node*)malloc(sizeof(Node));
	n3->val = 3;

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	Node* n4 = (Node*)malloc(sizeof(Node));
	n4->val = 1;
	Node* n5 = (Node*)malloc(sizeof(Node));
	n5->val = 2;
	Node* n6 = (Node*)malloc(sizeof(Node));
	n6->val = 3;

	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;

	mergeTwoLists(n1, n4);



	return 0;
}
#endif
#if 0
struct ListNode {
	int val;
	struct ListNode* next;
};
typedef struct ListNode Node;

struct ListNode* detectCycle(struct ListNode* head) {
	Node* quick = head;
	Node* slowly = head;
	Node* p;
	while (1)
	{
		if (quick == NULL)
			return NULL;
		quick = quick->next;
		slowly = slowly->next;
		if (quick == NULL)
			return NULL;
		quick = quick->next;
		if (quick == NULL)
			return NULL;
		if (quick == slowly)
		{
			p = quick;
			break;
		}
	}
	slowly = head;
	printf("%d\n", __LINE__);
	while (quick != slowly)
	{
		slowly = slowly->next;
		quick = quick->next;
	}
	printf("%d", __LINE__);
	return slowly;
}
int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	n1->val = 3;
	Node* n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node* n3 = (Node*)malloc(sizeof(Node));
	n3->val = 0;
	Node* n4 = (Node*)malloc(sizeof(Node));
	n4->val = -4;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n2;

	detectCycle(n1);



	return 0;
}
#endif

#if 1 
#include<stdbool.h>

struct ListNode {
	int val;
	struct ListNode* next;
};
typedef struct ListNode Node;

bool chkPalindrome(Node* A) {
	if (A == NULL && A->next == NULL)
		return true;

	Node* quick = A;
	Node* slowly = A;
	while (quick && quick->next && quick->next->next)//找到中间结点
	{
		quick = quick->next->next;
		slowly = slowly->next;
	}
	quick = slowly;//保存中间结点

	//头插法反转后半部分
	slowly = slowly->next;
	Node* midhead = (Node*)malloc(sizeof(Node));
	midhead->next = NULL;
	while (slowly != NULL)
	{
		Node* tmp1 = slowly->next;
		Node* tmp2 = midhead->next;
		midhead->next = slowly;
		slowly->next = tmp2;
		slowly = tmp1;
	}

	quick->next = NULL;

	quick = A;
	slowly = midhead->next;
	while (quick != NULL)
	{
		if (quick->val != slowly->val)
		{
			return false;
		}
		else
		{
			quick = quick->next;
			slowly = slowly->next;
		}
	}
	return true;
}

int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node* n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node* n3 = (Node*)malloc(sizeof(Node));
	n3->val = 3;
	Node* n4 = (Node*)malloc(sizeof(Node));
	n4->val = 2;
	Node* n5 = (Node*)malloc(sizeof(Node));
	n5->val = 1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;

	chkPalindrome(n1);



	return 0;
}

#endif