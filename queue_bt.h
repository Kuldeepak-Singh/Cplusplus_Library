#ifndef _Tree_h_
#define _Tree_h_
#include "Tree.h"
#endif


typedef struct queue 
{

	int front;
	int rear;
	int capacity;
	btnode **a;
}  btqueue_create;


struct queue * createbtqueue (int cap);	

void insertinbtqueue (struct queue *current , btnode *data);


btnode * deletefrombtqueue (struct queue *current );


btnode * getfirstbtelement (struct queue *current);