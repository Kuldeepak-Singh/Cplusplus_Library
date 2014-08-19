
#ifndef _BASICHELPERFUNCTIONS_H_
#define  _BASICHELPERFUNCTIONS_H_

#define MIN(a,b) ((a<b) ? a : b)  
#define MAX(a,b) ((a>b) ? a : b) 
void intswap (int *a , int *b);
void charswap (char *a , char *b);


typedef struct heapnode
{


	int data;
	int coloumn;
	int row;
}hn2;

extern int binarysearchincreasing (int a[] , int start ,int end, int item);

int binarysearchdecreasing (int a[] , int start ,int end, int item);

int binarysearchincreasingfirstoccourance (int a[] , int start ,int end, int item);


int firstnonrepeatring (int a[] , int length);


void find10thnumberinseries (int a , int b , int nth);
void numberofoccouranceofwords (char * str );


void printbinaryfromiton (int n);

long long int powerlogn (long long int a , long long int b);
#endif