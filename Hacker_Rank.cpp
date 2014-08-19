#include"Hacker_Rank.h"
#include<iostream>
#include<assert.h>
using namespace std;

int cutthetree (stn *root , int *tree_diff, unsigned long int sum);

void printinorderbt (stn *root, unsigned long int *sum);
int cutthetreeutil (stn *root)
{

	int tree_diff = INT_MAX;
	unsigned long int sum=0;
	printinorderbt(root,&sum);
	
	cutthetree(root , &tree_diff, sum);
	return tree_diff;
}

stn * createnode (int val, int index)
{

	stn * temp = new stn();

	temp->data = val;
	temp->key = index;
	temp->left = NULL;
	temp->parent = NULL;
	temp->right = NULL;

	return temp;
}

void addedge (stn * a , stn * b)
{
	if (b->parent == NULL)
	{
	
		b->parent=a;
		if (a->left== NULL)
			a->left=b;
		else
			a->right = b;
	}

	else if (a->parent== NULL)
	{
	
	a->parent = b;
	if (b->left== NULL)
		b->left =a;
	else
		b->right =a;

	}

	
}

int cutthetree (stn *root , int *tree_diff, unsigned long int sum)
{
	static int val=0;
	

	if (root == NULL)
		return 0;
	cout<<++val<<" "<<root->data<<endl;
	int leftsum = cutthetree (root->left,tree_diff,sum);
	int rightsum=cutthetree(root->right , tree_diff,sum);

	unsigned long int sumtree = root->data + leftsum +rightsum;

	int remsum = abs((long)sum-(long)(2*sumtree));

	if (*tree_diff > remsum)
		*tree_diff = remsum;

	return sumtree;



}

void printinorderbt (stn *root, unsigned long int *sum)
{
	if (root== NULL)
		return ;
	printinorderbt(root->left,sum);
	//printf("%d   ",root->data );
	*sum = *sum+root->data;
	printinorderbt(root->right,sum);


}