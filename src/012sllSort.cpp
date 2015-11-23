/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int c0=0, c1=0, c2=0,i;
	struct node *l;
	l = head;
	while (l)
	{
		switch (l->data)
		{
		case 0: c0++;
			break;
		case 1: c1++;
			break;
		case 2: c2++;
			break;
		}
		l = l->next;
	}
	l = head;
	for (i = 0; l && i < c0; i++)
	{
		l->data = 0;
		l = l->next;
	}
	for (i = 0; l && i < c1; i++)
	{
		l->data = 1;
		l = l->next;
	}
	for (i = 0; l && i < c2; i++)
	{
		l->data = 2;
		l = l->next;
	}
}