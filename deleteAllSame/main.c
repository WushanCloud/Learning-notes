#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
	
}ListNode;


struct ListNode* deleteDuplicates(struct ListNode* pHead) {
	if (pHead == NULL) return NULL;
	if (pHead->next == NULL)return NULL;

	ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
	newhead->next == NULL;
	ListNode* newcur = newhead;

	ListNode* cur = pHead->next;
	while (cur)
	{
		if (cur->val == pHead->val)
		{
			while (cur && cur->val == pHead->val)
			{
				cur = cur->next;
			}
			if (cur == NULL)
			{
				break;
			}
			else if (cur->next == NULL)
			{
				newcur->next = cur;
				break;
			}
			else
			{
				pHead = cur;
				cur = cur->next;
			}
		}
		else
		{
			pHead->next = newcur->next;
			newcur->next = pHead;
			newcur = newcur->next;

			pHead = cur;
			cur = cur->next;
		}
	}

	// cur = ;cur
	// free(newhead);
	return newhead->next;
}



int main()
{
	int arr[] = { 1,1,1 };
	int len = sizeof(arr) / sizeof(arr[0]);

	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	ListNode* cur = head;
	
	for (int i = 0; i < len; i++)
	{
		ListNode* node = (ListNode*)malloc(sizeof(ListNode));
		node->val = arr[i];
		node->next = cur->next;
		cur->next = node;
		cur = cur->next;
	}

	deleteDuplicates(head->next);

	/*cur = head->next;*/
	/*for (int i = 0; i < len; i++)
	{
		printf("%d ", cur->val);
	}
	printf("\n");*/
	return 0;

}