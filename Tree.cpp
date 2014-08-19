
#ifndef _Tree_h_
#define _Tree_h_
#include "Tree.h"
#endif

#include<assert.h>
#include<iostream>
#include<stdlib.h>
#include"basichelperfunctions.h"
#ifndef _queuebt_h_
#define _queuebt_h_
//#include"queue_bt.h"
#endif

#include<stack>
#include<queue>
#include<list>
#include<algorithm>
using namespace std;

bool findkeyandadd (list<sumList> &mylist  ,int keyvel, int val);

int findmaxdistancebetweennodes (btnode *root,int *distance );
btnode * createnodeforbt (int val)
{

	btnode *newnode = (btnode *) malloc (sizeof(btnode));


	assert (newnode);

	newnode->data = val;
	newnode->left = NULL;
	newnode->right =NULL;
	newnode->sibling=NULL;
	return (newnode);
}

void printinorderbt (btnode *root)
{
	if (root== NULL)
		return ;
	printinorderbt(root->left);
	printf("%d   ",root->data );
	printinorderbt(root->right);


}

btnode *createrandombt (void)
{
		btnode *root = createnodeforbt(1);
		
	root->left = createnodeforbt (2);
	root->right = createnodeforbt (3);
	root->left->left = createnodeforbt (7);
	root->left->left->left = createnodeforbt (7);
	root->left->left->left->left= createnodeforbt (7);
	root->left->left->left->left->left= createnodeforbt (7);
	root->left->right = createnodeforbt (5);
	root->left->right->right = createnodeforbt (9);
	root->left->right->right->right = createnodeforbt (10);
	root->left->right->right->right->right = createnodeforbt (11);
	
	root->right->left = createnodeforbt (6);
	root->right->right = createnodeforbt (4);

	return root;

}

btnode *createrandombt1 (void)
{
		btnode *root = createnodeforbt(1);
	root->left = createnodeforbt (2);
	root->right = createnodeforbt (3);
	root->left->left = createnodeforbt (7);
	root->left->left->left = createnodeforbt (8);
	root->left->left->left->left= createnodeforbt (15);
	root->left->left->left->left->left= createnodeforbt (18);
	root->left->right = createnodeforbt (5);
		root->left->right->left = createnodeforbt (32);
	root->left->right->right = createnodeforbt (9);
	root->left->right->right->left = createnodeforbt(33);
	root->left->right->right->right = createnodeforbt (10);
	root->left->right->right->right->right = createnodeforbt (11);
	
	root->right->left = createnodeforbt (6);
	root->right->right = createnodeforbt (4);

	return root;

}


btnode *createrandombtwithsibling (void)
{
		btnode *root = createnodeforbt(1);
	

	root->left = createnodeforbt (2);


	root->right = createnodeforbt (3);


	root->left->left = createnodeforbt (7);
	


	root->left->left->left = createnodeforbt (8);


	root->left->left->left->left= createnodeforbt (15);
	root->left->left->left->left->left= createnodeforbt (18);
	root->left->right = createnodeforbt (5);
		root->left->right->left = createnodeforbt (32);
	root->left->right->right = createnodeforbt (9);
	root->left->right->right->left = createnodeforbt(33);
	root->left->right->right->right = createnodeforbt (10);
	root->left->right->right->right->right = createnodeforbt (11);
	
	root->right->left = createnodeforbt (6);
	root->right->right = createnodeforbt (4);

		root->left->left->left->sibling=root->right;
		root->left->left->sibling =root->left->right->left;
			root->right->sibling = root->right->left;
				root->left->sibling = root;
					root->sibling = root->left->left->left->left->left;

	return root;

}
void convertbinarytreeintobst (btnode *root)
{

	static btnode *prev =NULL;

	if (root==NULL)
		return ;
	convertbinarytreeintobst (root->left);

	if (prev)
	{
		if (root->data < prev->data)
		{
		
			intswap (&(root->data) , & (prev->data));
		}
	}
	prev = root;
	convertbinarytreeintobst (root->right);

}

void removepathwithsumlessthank (btnode **root , int sum )
{

	if (*root ==NULL)
		return ;

	removepathwithsumlessthank (&((*root)->left) , sum-(*root)->data);
	
	removepathwithsumlessthank (&((*root)->right) , sum-(*root)->data);

	if ((sum- ((*root)->data)) >0 && (*root)->left==NULL && (*root)->right==NULL)
	{
	
		*root = NULL;
		free (*root);
	}
}

/*
void levelordertraversalusingqueue (btnode *root)
{
	btqueue_create *qnode=createbtqueue(50);
	btnode *temp;
	if (root==NULL)
		return;

	insertinbtqueue (qnode,root);

	while (qnode->front !=-1)
	{
	
		temp = deletefrombtqueue(qnode);

		printf ("%d  ", temp->data);
	
	

	if (temp->left )
		insertinbtqueue(qnode,temp->left);
		if (temp->right )
		insertinbtqueue(qnode,temp->right);
	}
}*/
/*
int maxsumatlevel (btnode *root)
{

	btqueue_create *qnode=createbtqueue(50);
	btnode *temp;

	int currentlevelsum=0,maxsofar=0;
	if (root==NULL)
		return 0;

	insertinbtqueue (qnode,root);
	insertinbtqueue (qnode,NULL);
	while (qnode->front !=-1)
	{
	
		temp = deletefrombtqueue(qnode);

		//printf ("%d  ", temp->data);
	
	if (temp==NULL)
	{
	  
		if (currentlevelsum > maxsofar)
		{
		
			maxsofar = currentlevelsum;
			currentlevelsum=0;
		}
		if(qnode->front !=-1)
		insertinbtqueue(qnode,NULL);
	}

	else{

		currentlevelsum= currentlevelsum+temp->data;
	if (temp->left )
		insertinbtqueue(qnode,temp->left);
		if (temp->right )
		insertinbtqueue(qnode,temp->right);
	}
	}
	return maxsofar;
}
*/
int findmaxhelper (btnode *root)
{
		 int distance =0;
		 findmaxdistancebetweennodes(root,&distance);
		 return distance-1;
}

int findmaxdistancebetweennodes (btnode *root,int *distance )
{

	if (root==NULL)
		return 0;

	int left_height = findmaxdistancebetweennodes (root->left,distance);
	int right_height = findmaxdistancebetweennodes (root->right,distance);


	if  (*distance < (left_height + right_height+1))
		*distance =left_height + right_height+1;

    return (MAX(left_height,right_height)+1);

}

void printverticalsum (btnode *root)
{
   list <sumList> mylist;

   printverticalsumutil (root , mylist ,0);


   list <sumList> ::iterator it;


	for (it = mylist.begin() ; it!=mylist.end();it++)
	{
	
		
		
		cout<<"level"<<(*it).key<<endl;
		cout<<"Sum"<<(*it).value<<endl;
			
		
	}
}

void printverticalsumutil (btnode *root , list <sumList> &mylist, int level)
{
	list<sumList> ::iterator it;
	if (root==NULL)
		return;

	bool result=	findkeyandadd(mylist, level, root->data);	

	if (result==false)
	{
	
		sumList node;
		node.key = level;
		node.value = root->data;
		mylist.push_front(node);
	}
		


	printverticalsumutil (root->left,mylist , level-1);
		printverticalsumutil (root->right,mylist , level+1);
}

bool findkeyandadd (list<sumList> &mylist  ,int keyvel, int val)
{

	list <sumList> ::iterator it;


	for (it = mylist.begin() ; it!=mylist.end();it++)
	{
	
		if ((*it).key == keyvel ) 
		{
		
			(*it).value = (*it).value + val;
			return true;
		}
	}
	return false;
}



void maxroottoleafutil (btnode *root , int sum , int a[] , int *index,int *maximum)
{


	if (root==NULL)
		return;
	
	
	maxroottoleafutil (root->left , sum+root->data ,a,index,maximum); 
		maxroottoleafutil (root->right , sum+root->data ,a, index,maximum);


		if (root->left == NULL && root->right==NULL)
		{
			sum  = sum + root->data;
			if (sum > *maximum )
			{
			
				*maximum = sum;

				
			}

		



		}

}


void printarray (int a[] , int length)
{

	for (int i=0; i<length;i++)
		cout<<a[i]<<endl;
}
void printmaxroottoleafpath (btnode *root , int maximum , int a[] , int index,int sum)
{
	if (root== NULL )
		return;


	sum = sum +root->data;
	a[index] = root->data;
			index = index+1;
	if (root->left == NULL && root->right== NULL && sum ==maximum)
		printarray(a,index);
	
	

	
	printmaxroottoleafpath (root->left , maximum , a, index,sum);
	printmaxroottoleafpath (root->right , maximum , a, index,sum);



}

void maxroottoleaf (btnode * root)
{
	int sum = 0;
	int index=0;
	int A[MAXLENGTH]={0};
	int maximum =INT_MIN;
	maxroottoleafutil (root , sum , A,&index,&maximum);
	
	cout<<maximum;
	index=0;
	printmaxroottoleafpath (root , maximum , A, index,sum);
}


void iterativeinorder (btnode *root)
{
	btnode *current = root;

	if (root== NULL)
		return;

	stack<btnode *> myStack;

	myStack.push(current);
	current = current->left;
	while (!myStack.empty() || current)
	{
	
		while (current)
		{
			myStack.push(current);
			current= current->left;
		 
		}

		current = myStack.top();
		cout<<current->data<<endl;
		myStack.pop();

		current = current->right;
	
	}
	

}

bool aretreesequal (btnode *root1 , btnode *root2)
{

	if (root1==NULL && root2 == NULL)
		return true;


	if (root1->data == root2->data  && aretreesequal (root1->left ,root2->left) && aretreesequal (root1->right ,root2->right))
		return true;


	return false;
}


void printzizzag (btnode *root)
{

	if (root == NULL)
		return;

	//queue<btnode *> myqueue;

	stack<btnode *> mystack;
stack<btnode *> mystack1;
	bool flag=true;
	mystack1.push(root);

	while (!mystack.empty() || !mystack1.empty())
	{
	
		if (flag)
		{
		
			cout<<endl;
			while (!mystack1.empty())
			{
			  btnode *temp = mystack1.top();
			  cout<<temp->data<<" ";
			  mystack1.pop();
			  if (temp->left)
			  mystack.push(temp->left);
			  if (temp->right)
				  mystack.push(temp->right);
			  
			}

			flag=0;

		}

		else
		{
			cout<<endl;
		while (!mystack.empty())
			{
			  btnode *temp = mystack.top();
			  cout<<temp->data<<" ";
			  mystack.pop();
			   if (temp->right)
				  mystack1.push(temp->right);
			  if (temp->left)
			  mystack1.push(temp->left);
			 

			}
		flag=1;

		}
	
	}

}

void insertintrie (trie1 *root,string data,int startindex)
{

	if (data.empty())
		return;

	int index =  data[startindex]- 'a';
	if (startindex == (data.length()-1))
	{
		if (root->dict[index]== NULL)
	{
		 root->dict[index] = createtrie1node(true);
		//insertintrie( root->dict[startindex],data,startindex+1);
	}

	else
	{
	//insertintrie(root->dict[index],data,startindex+1);
	root->dict[index]->isword= true;
	}
	

	return;
	}
		
		

	if (root->dict[index]== NULL)
	{
		 root->dict[index] = createtrie1node(false);
		insertintrie( root->dict[index],data,startindex+1);
	}

	else
	{
	insertintrie(root->dict[index],data,startindex+1);

	}

		
}

trie1  * createtrie1node (bool val)
{

	trie1 *temp  = new trie1() ;

	temp->isword = val;

	for (int i=0 ; i<26;i++)
		temp->dict[i]=NULL;
	return temp;
}

bool searchintrie (trie1 *root , string data,int startindex)
{
	if (!data.length() || root== NULL)
		return false;

	int index = data[startindex]-'a';

	
	if (root->dict[index]== NULL)
		return false;

	else if (root->dict[index]->isword==true)
		return true;
	else
		return searchintrie(root->dict[index],data,startindex+1);


}

void preorderiterative (btnode *root)
{
	stack <btnode  *> mystack;
	mystack.push(root);
	while ( ! mystack.empty())
	{
		root = mystack.top();
		mystack.pop();
	while (root)
	{
		cout << root->data<<endl;

		

		if (root->right)
			mystack.push(root->right);

		root = root->left;
	}
	}
}

void printnodesatkdistancedown (btnode *root,int k)
{

	if (root == NULL)
		return;

	if (k==0 )
		cout<<root->data<<" ";

	printnodesatkdistancedown(root->left,k-1);
	printnodesatkdistancedown(root->right,k-1);
}


int findallatkdistance (btnode *root , btnode *node ,int k)
{

	if (node== NULL || root == NULL)
		return -1;

	if (root == node )
	{
	
		printnodesatkdistancedown(root,k);

		return 1;
	}

	int leftdistance = findallatkdistance (root->left , node,k);

	if (leftdistance !=-1)
	{
	
		if (leftdistance -k ==0)
		{
		
			cout<<root->data<<" ";
		}

		else if (leftdistance -k <0)
		{

			printnodesatkdistancedown (root->right, k -leftdistance-1);

		}


		return leftdistance+1;
	}

	int rightdistance = findallatkdistance (root->right , node,k);

	if (rightdistance !=-1)
	{
	
		if (rightdistance -k ==0)
		{
		
			cout<<root->data<<" ";
		}

		else if (rightdistance -k <0)
		{

			printnodesatkdistancedown (root->left, k -leftdistance-1);

		}


		return rightdistance+1;
	}
}



void makecopy (btnode *root , btnode **copy)
{
		if (root == NULL)
		return;

		makeacopyoftree (root , copy);
		playwithsiblings (root , *copy);

}



void makeacopyoftree (btnode *root , btnode **copy)
{
	if (root == NULL)
		return;
	*copy =createnodeforbt(root->data);
	(*copy)->sibling = root->sibling;
	root->sibling = *copy;
	makeacopyoftree(root->left,& ((*copy)->left));
	makeacopyoftree(root->right,& ((*copy)->right));
}

void playwithsiblings (btnode *root , btnode *copy)
{

	if (root == NULL)
		return;
	btnode *temp = copy->sibling;

	if (copy->sibling)
	copy->sibling = copy->sibling->sibling;

//	root->sibling = temp;

	playwithsiblings(root->left , copy->left);
		playwithsiblings(root->right , copy->right);
}

void printtreewithrandom (btnode *root )
{

	if (root== NULL)
		return;
	if (root->sibling)
		cout<<"Siboling of "<<root->data<<" is " << root->sibling->data<<endl; 

	else
		cout<<"Siboling of "<<root->data<<" is NULL"<<endl;

	printtreewithrandom(root->left);
	printtreewithrandom(root->right);
}