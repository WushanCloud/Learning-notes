#include<stdio.h>

typedef struct ListNode  ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	
	ListNode* head = (ListNode*)malloc(sizeof(ListNode*));
	ListNode* tail = head;
	
	// tail->next=NULL;
	
	if (l1->val == NULL)return l2;
	if (l2->val == NULL)return l1;
	
	while ((l1->val != NULL) && (l2->val != NULL))
	{
		if (l1->val < l2->val)
		{
			tail->next = l1->val;
			tail = tail->next;
			l1 = l1->next;

		}
		else
		{
			tail->next = l2->val;
			tail = tail->next;
			l2 = l2->next;
		}
	}

	return head;

}