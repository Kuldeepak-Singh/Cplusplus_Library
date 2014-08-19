#include"MinimumnumberofCoinsSum.h"
#include<iostream>
#include<algorithm>
using namespace std;


int minimumcointoproducesumutil (int a[] , int length , int sum, int min[]);

int minimumcointoproducesum (int a[] , int length , int sum) 
{
	static int * min = new int [sum];
	fill (min,min+sum+1,-1);
	

	return minimumcointoproducesumutil(a, length , sum ,min);

}

int minimumcointoproducesumutil (int a[] , int length , int sum, int min[])
{
	

	if (sum<=0)
		return 0;
	
	int minimum = INT_MAX-1;
	int val=INT_MAX-1;

	if (min[sum] !=-1)
		return min[sum];
	for (int i=0 ; i<length;i++)
	{
		if (sum-a[i] >=0)
		 val = 1+ minimumcointoproducesumutil (a, length , sum-a[i],min);

		if (val < minimum)
			minimum =val ;
	}

	min[sum] = minimum;
	return minimum;
}

