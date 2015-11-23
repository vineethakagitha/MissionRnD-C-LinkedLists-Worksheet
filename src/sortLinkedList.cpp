/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *last = NULL,*l,*pl;
	int temp;
	if (head)
	{
		do{
			for (pl = head, l = head; l; l = l->next)
			{
				if (pl->num > l->num)
				{
					temp = pl->num;
					pl->num = l->num;
					l->num = temp;
				}
				if (l->next == last)
				{
					last = l; break;
				}
				pl = l;
			}
		} while (last != head);
		return head;
	}
	return NULL;
}