#ifndef _HACKER_RANK_H_
#define _HACKER_RANK_H_

typedef struct  spectreenode
{
	int key;
	int data;
	spectreenode *left;
	spectreenode *right;
	spectreenode *parent;
}stn;


void addedge (stn * a , stn * b);

stn * createnode (int val, int index);


int cutthetreeutil (stn *root);

#endif