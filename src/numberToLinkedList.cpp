/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	int i;
	struct node *l,*head;
	if (N < 0)
		N = -N;
	l = (struct node*)malloc(sizeof(struct node*));
	l->num = 0;
	l->next = NULL;
	head = l;
	for (i = 0; N > 0; i++)
	{
		head = l;
		head->num = N % 10; 
	    l = (struct node*)malloc(sizeof(struct node*));
		l->next = head;
		N = N / 10;
	}
	return head;
}