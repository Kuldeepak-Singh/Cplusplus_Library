

#include"linklist.h"
#include<iostream>
using namespace std;
sll *createlistnode (int val)
{
	sll *temp  = new sll();

	temp->data = val;
	temp->next = NULL;
	return temp;
}


sll *createrandomlits ()
{

	sll * head = createlistnode(1);
	head->next = createlistnode(2);
	head->next->next = createlistnode(3);
	head->next->next->next = createlistnode(4);
	return head;
}
sll * revierserecursive (sll *head ,sll **newptr)

{

	

	if (head== NULL )
		return head;
	
	sll *	prev = revierserecursive(head->next,newptr);
	if (prev== NULL)
	{
		*newptr = head;
		
	}
	else
	{
		prev->next = head;
	head->next =NULL;
	}
	return head;
	
}

void printsll (sll *head)
{

	while (head)
	{
		cout<<head->data<<endl;
		head= head->next;
	}
}