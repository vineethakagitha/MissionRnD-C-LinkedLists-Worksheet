/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *pl, *l;
	int i;
	pl = head; l = head;
	if (head && K > 0)
	{
		if (K == 1)
		{
			head = NULL;
			return head;
		}
		for (i = 1; l; i++, l = l->next)
		{
			if ((i%K) == 0)
			{
				pl->next = l->next;
			}
			pl = l;
		}
		return head;
	}
	return NULL;
}