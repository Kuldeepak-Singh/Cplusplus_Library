#include<iostream>

#include"union_find.h"
#include"Activity_Selection.h"
#include"Num_Way_Prod_Sum.h"
#include"Tree.h"
#include"3-SUM.h"
#include"BioTonic.h"
#include"basichelperfunctions.h"
#include"Rat_Maze_Problem.h"
#include"MinHopstoReachend.h"
#include"MinimumnumberofCoinsSum.h"
#include"Stringplay.h"
#include"01KnapsackProblem.h"
#include"Array_Problems.h"
#include"Suffix_Array.h"
#include"Hacker_Rank.h"
#include"linklist.h"

using namespace std;


int*  get_best_fit(int aMin, int aMax, int bMin, int bMax, int cMin, int cMax, int* points, int numPoints);
int main()
{
	/*quickfind qf;

	qf.addedge(5,1);
	qf.addedge(9,2);
	qf.addedge(8,1);
	qf.addedge(1,3);
	qf.addedge(0,7);
	qf.addedge(9,3);

	qf.print(9);*/

	/*quickunion qu;

	qu.addedge(4,0);
	qu.addedge(8,9);
	qu.addedge(2,5);
	qu.addedge(7,3);
	qu.addedge(7,6);
	qu.addedge(0,8);
	qu.addedge(3,5);
		qu.addedge(3,1);
		qu.addedge(0,3);
	qu.print(9);*/

	/* Activity Selection  */
	/*int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
	activitySelection (s,f,n);*/


	/* Num of ways to produce a sum */
	/* int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    cout<< count ( arr , m , n);*/
	//	cout<<numofwaystoproducesumkd(a,3,4)<<endl;

	/* Find maximun distance between two nodes */
	/*btnode *root= createrandombt();
	cout<<findmaxhelper(root);*/


	/* 3 Sum Problem in n2 */
	/*int s[] =  {1, 3, 0, 5, 8, 5};
	three_SUM_Problem(s , 0, 5,9);*/

	/* BioTonic array search in 3 Logn & 2 logn */
	/*int a[] = {1,3,9,8,7,6};
	// cout<<BioTonic3logn(a, 0,5,3);
	cout<<BioTonic2logn(a,0,5,8);*/

	/* Find first Occourance of a number */
	/*int a[] = {3,3,3,3,3,3};
	cout<<binarysearchincreasingfirstoccourance(a,0,5,8);*/

	/* Print Vertical Sum*/
	/*btnode *root= createrandombt();
	printverticalsum(root);*/

	/* Rat Maze Problem */
	/*
	If there is a path*/
	/*int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 0, 0},
        {1, 1, 0, 1}
    }; 
	istherepathmattrix(maze);*/

	/* Rat Maze Problem */
	/* Total Number of paths */
	/*
	int maze[M][N]  =  { {1, 1, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0},
        {1, 1, 1, 1}
    };

	cout<<numofwaystoreachexit (maze);*/

	/* Minimum Hops to reach end of the array*/

/*	int a[] ={0, 1, 1, 3, 2, 3, 6, 8, 9, 5};
	
cout<< minimumhopstoreachend (a, 11);*/

	/* Minimum Number of coins required to produce sum */

	/*int a[] = {1,2,3};
	cout << minimumcointoproducesum(a, 3,3)<<endl;

	*/
	/* Reverse words of a sentence */

	/*char name [] =  "Hip Amazon Sicl";
 reversewords (name,strlen(name)) ;
 cout<<name;*/

	/*  0 1 Knapsack Problem*/
	/*int val[] = {10, 40, 30,50};
    int wt[] = {5, 4, 6,3};
    int  W = 10;
    int n = sizeof(val)/sizeof(val[0]);
cout<< maxvalueofknapsack (val,n,wt,W);*/


	/* Maximum root to leaf path and sum */
    /* btnode *root= createrandombt();

	maxroottoleaf(root);*/

/* Iterative inordre traversal */
/*
btnode *root= createrandombt();
iterativeinorder(root);*/

/* First Non repeating element*/
/*
int a[] = {7,8,9,11,8,7,2,9,2,11};
int length = sizeof (a) / sizeof(int);
cout<<firstnonrepeatring(a,length);*/

/* If trees are equal */
/*
btnode *root1 = createrandombt();
btnode *root2 = createrandombt1();
cout<<aretreesequal(root1,root2);*/
/*
char str[] = "Hi book rookie book skewtew rookie Hi";

numberofoccouranceofwords(str);
*/
/*
find10thnumberinseries(2,3,10);*/

/*  print all binary from 1 to n*/
/*
printbinaryfromiton(16);*/


/* Print Sum in the Maximum Sum Path */

  /*int ar1[]  = {2, 3, 7, 10, 12, 15, 30, 34};
    int ar2[] =  {1, 5, 7, 8, 10, 15, 16, 19};
    int m = sizeof(ar1)/sizeof(ar1[0]);
    int n = sizeof(ar2)/sizeof(ar2[0]);
 cout<<maximumsumpathproblem (ar1,m,ar2,n);*/

//printfibonacci(4000000);

/* Suffix Array Naive Algorithm */
/*
int a[6]={0};
int length = sizeof(a)/sizeof(int );
constructsuffixarray("Banana",a,length);

for (int i=0;i<length;i++)
{
	cout<<a[i]<<endl;
}

*/

// Hacker Rank Cut the Tree
/*
freopen("test.txt","r",stdin);
unsigned long int  Num;
cin>>Num;

stn ** a = new stn * [Num+1];

int val;
for (int i=1;i<=Num;i++)
{
	cin>>val;
	a[i] =createnode(val,i);

}
unsigned long int node1 , node2;
stn *root= NULL;
for (int i=1;i<Num;i++)
{
	cin>>node1>>node2;
	if (root== NULL)
		root= a[node1];
	addedge(a[node1],a[node2]);
	
}

cout<<"output"<<cutthetreeutil(root);

fclose(stdin);*/

//for (double i =0.0 ; i<3.0;i++)
	//cout<<"h";
/*
int points[] = {17,4225,20,5809,21,6393};
int *a =get_best_fit(8,18,3,14,8,16,points,6);
cout<<a[0]<<endl;
cout<<a[1]<<endl;;
cout<<a[2]<<endl;*/

/* no of poles which are visible if you are standing at the ith pole.  */
/*
int a[] = {11,5,6,1,2,7,3,2};

int length = sizeof(a)/sizeof(int);

allpoesvisibleatheighti(a,length);*/

/* Link list reversal */
/*
sll *temp=createrandomlits ();

sll *head = NULL;
revierserecursive(temp , &head);
printsll(head);*/

/* Zig Zag Traversal */
/*
btnode *head = createrandombt ();


 printzizzag(head);*/

/*  Alternate positive and negative numbers */
/*
int a[] = {3,8,9,-5,-11,-2,-7,-12,5,6,8,-7};
int length = sizeof(a)/sizeof(int);
alternatenegativepositive(a,length);
printarray (a,length);*/
/*
trie1 *root = createtrie1node (false);
insertintrie(root,"hello",0);
insertintrie(root,"helli",0);

cout<<searchintrie(root,"hello",0);
cout<<searchintrie(root,"keli",0);
cout<<searchintrie(root,"helli",0);
cout<<searchintrie(root,"hellp",0);*/

/* Given few sets of intervals print out the the entire intervals without overlapping, if they overlap then combine them into one.*/
/*
intrevals a[]= {{5,7}, {1 , 6}, {2 ,4}, {10 ,14}, {8,9}};
int length=(sizeof(a)/sizeof(intrevals));
compressingintervals(a,length);
*/

/* Iterative Preorder */
/*
btnode *root = createrandombt1();
preorderiterative (root);
*/
/* Calculate Power in Logn 
cout<<powerlogn (5,11);  */

/*  Sort based on your own sort order */
/*
int arr[] = {1,2,4,3,5,4,9,2};
int length = sizeof(arr)/sizeof(int);
int myorder[] =  {2,3,1,4};
int length2 = sizeof(myorder)/ sizeof(int);
sortbasedonmyorder(arr,length,myorder,length2);
for (int i=0;i<length;i++)
	cout<<arr[i]<<" ";
	*/

// Compress String
/*
char s[100] = {0};

strncpy(s,"helookkkyyybol",14);
//compressstring(s);
//cout<<s;
*/

// Find all nodes at distance k from given node
/*
btnode *root = createrandombt1();
 findallatkdistance (root , root->left->left->left ,1);*/

// Clone a tree having Random Pointers
/*
btnode *root = createrandombtwithsibling ();
btnode *copy = NULL;
cout<<"Printing Original " <<endl;
printtreewithrandom(root);
makecopy(root,&copy);
cout<<"Printing Clone " <<endl;
printtreewithrandom(copy);
//printtreewithrandom(root);
*/

// Longest Common Subsequence 
/*
char * first = "ABCDGHL";
char *second = "AEDFHRL";
LCS(first,second,strlen(first),strlen(second)); */

// Longest Increasing Subsequence 
/*
  int arr[] = { 10,8, 22, 9, 33, 21, 50, 41, 60 };
  int n = sizeof(arr)/sizeof(arr[0]);
longestcommonsubsequencebrute(arr,n);   */
return 0;
}

int calculatesum (int a, int b, int c,int x )
{

  int retval = (x*x*a) + (x*b) + c;
  
  return retval;

  
}

int calculatecurrentmindiff (int a[] , int length)
{

  int sum=0;
  for (int i=0;i<length;i++)
  {
  
    sum = sum + (a[i] *a[i]) ;
  }
  
  return sum;
}
int*  get_best_fit(int aMin, int aMax, int bMin, int bMax, int cMin, int cMax, int* points, int numPoints)
{
  int *diff = new int [(numPoints-1)/2];
  static int a[3] = {0};
  int currentmindiff = INT_MAX;
  for (int i= aMin;i<=aMax;i++)
  {
  
    for (int j=bMin; j<=bMax;j++)
    {
    
      for (int k=cMin;k<=cMax;k++)
      {
        for (int l=0;l<numPoints;l+=2)
        {
        
          diff[l/2] = points[l+1] - calculatesum (i,j,k,points[l]);
                 
            
        
         }
       int min = calculatecurrentmindiff (diff,(numPoints-1)/2);
        if (min <currentmindiff)
        {
        currentmindiff = min;
          a[0] = i;
          a[1] = j;
          a[2] = k;
          
        }
       }
     }
       return a;
   }
}
