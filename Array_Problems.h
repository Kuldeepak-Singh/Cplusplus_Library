#ifndef _ARRAY_PROBLEMS_H
#define _ARRAY_PROBLEMS_H

typedef struct astruct
{

	int index;
	int val;
}as;

typedef struct 
{
  int start;
  int end;
}intrevals;
int maximumsumpathproblem (int a[] , int lengtha , int b[] ,int lengthb);

void compressingintervals (intrevals a[] , int length);
template<typename T>
void printarray (T a[], int length);
void alternatenegativepositive (int a[] , int length);

void printfibonacci (unsigned long long  limit );

int * allpoesvisibleatheighti (int a[] , int length);

void sortbasedonmyorder (int arr[] , int length , int myorder[] , int length2);


int longestcommonsubsequencebrute (int a[] , int length);

void LCS (char a[] , char b[] , int m , int n);
#endif