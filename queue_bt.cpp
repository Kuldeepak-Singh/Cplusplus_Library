#ifndef _stdlib_h
#define _stdlib_h
#include <stdlib.h>
#endif

#ifndef _stdio_h
#define _stdio_h
#include <stdio.h>
#endif

#include "queue_bt.h"  // self header



struct queue * createbtqueue (int cap)
{

	struct queue  *node= (struct queue  *)  malloc (sizeof (struct queue  *));

	if (node)
	{
	
		node->front = node->rear = -1;
		node->capacity =cap;

		node->a = (btnode **) malloc (sizeof(btnode **) *(node->capacity));

		return node;
	}
	return NULL;

}

void insertinbtqueue (struct queue *current , btnode *data)
{

	if (current == NULL)
		return;

	if (((current->rear) - (current->front) +1 ) % current->capacity ==0 )
		{printf ("queue is full");
		return ;
	}
		current->a[(++(current->rear)) %(current->capacity)] = data;
		current->rear = current->rear % current->capacity;
		if (current->front == -1)
			current->front ++;



}


btnode * deletefrombtqueue (struct queue *current )
{  btnode *temp;

	if (current== NULL)
		return 0;

	if (current->front ==-1)
	{  //printf("queue is empty");
		return 0;
	}

	   temp = current->a[current->front];
	if (current->front == current->rear)
	{
	
		current->front = current->rear =-1;
		return temp;
	}
	current->front = (++current->front) % current->capacity;

	return temp;

}

btnode * getfirstbtelement (struct queue *current)
{

	if (current == NULL)
		return NULL;

		if (current->front ==-1)
			return NULL;

		return (current->a[current->front]);

}