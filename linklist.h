#ifndef _LINKIST_H_
#define _LINKIST_H_

typedef struct singlylist
{

	int data;
	struct singlylist *next;
}sll
	;


sll * revierserecursive (sll *head ,sll **newptr);

sll *createlistnode (int val);

void printsll (sll *head);
sll *createrandomlits ();
#endif