
#include<list>
#define MAXLENGTH 100
using namespace std;
typedef struct bnode
{

	int data;
	struct bnode *left;
	struct bnode *right;
	struct bnode *sibling;
} btnode;

typedef struct List
{

	int key;
	int value;
}sumList;

typedef struct trie1node
{
	bool isword;

	trie1node *dict[26];

}trie1;
btnode * createnodeforbt (int val);

btnode *createrandombt (void);

void printzizzag (btnode *root);

btnode *createrandombt1 (void);

void printinorderbt (btnode *root);


int findmaxhelper (btnode *root);


void convertbinarytreeintobst (btnode *root);


void removepathwithsumlessthank (btnode **root , int sum );


void levelordertraversalusingqueue (btnode *root);


int maxsumatlevel (btnode *root);


void printverticalsumutil (btnode *root , list <sumList> &mylist, int level);


void printverticalsum (btnode *root);

void maxroottoleaf (btnode * root);


void iterativeinorder (btnode *root);


bool aretreesequal (btnode *root1 , btnode *root2);



bool searchintrie (trie1 *root , string data,int startindex);


void insertintrie (trie1 *root,string data,int startindex);


trie1  * createtrie1node (bool val);


void preorderiterative (btnode *root);


int findallatkdistance (btnode *root , btnode *node ,int k);

// Copy of tree with Random Pointer
// ---------START HERE------
void printtreewithrandom (btnode *root );

void playwithsiblings (btnode *root , btnode *copy);


void makeacopyoftree (btnode *root , btnode **copy);


void makecopy (btnode *root , btnode **copy);



btnode *createrandombtwithsibling (void);

// ----- END HERE--------------