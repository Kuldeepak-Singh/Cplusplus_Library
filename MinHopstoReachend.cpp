#include<iostream>
#include<algorithm>
#include"MinHopstoReachend.h"
#include <cstdlib>
using namespace std;


int getminimumsteps (int a[] ,int temp[], int length , int steps , int index);

int minimumhopstoreachend (int a[] , int length)

{

	int *temp = new int[length];
	//fill(temp , temp+length,0);
	for (int i = length-1 ; i>=0;i--)
		temp[i]=INT_MAX;
	temp[length-1]=0;
	for (int i = length-2 ; i>=0;i--)
	{
	
		if (length-a[i]-i-1 <= 0 )
		{
		
			temp[i]=1;
		
		}

		else
		{
		if(a[i]!=0)
		{
			int val=getminimumsteps (a,temp, length ,a[i], i);
			if(val<INT_MAX)
			{
		temp[i] = 	1+val;

			}
			else
			{
			temp[i]=val;
			}
		}
		}
	
	
	}


	int retval = temp[0];
	delete[] temp;
	return (retval);
}

int getminimumsteps (int a[] ,int temp[], int length , int steps , int index)
{
	int minimum = INT_MAX;
	int takensteps=0;
	for (int i=index+1 ; takensteps<steps && i<=length-1   ;i++)
	{
		takensteps+=1;
		if (temp[i] < minimum)
			minimum = temp[i];
		}
	

	return minimum;
}
