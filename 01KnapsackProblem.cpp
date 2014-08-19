#include"01KnapsackProblem.h"
#include"basichelperfunctions.h"
#include<iostream>

using namespace std;
int maxvalueofknapsack (int a[] , int lengtha , int w[] , int W)
{

	int **sol  = new int * [lengtha+1];

	for (int i=0 ; i<lengtha+1;i++)
		sol[i] = new int [W+1];

	for (int i=0 ;i<lengtha+1;i++)
	{
	
		for (int j=0;j<W+1;j++)
			sol[i][j]=0;
	}

	for (int i=1 ; i<lengtha+1;i++)
	{
	
		for (int j=0; j<W+1;j++)
		{
		
			if (j-w[i-1] >=0)
			{
			
				
				
					sol[i][j] = MAX(a[i-1] + sol[i-1][j-w[i-1]],sol[i-1][j]);
				
				
				
			}

			else
			{
			
				sol[i][j]=sol[i-1][j];
			
			}
		
		}
	}
		int retval = sol[lengtha][W];

		for (int i=0 ; i<lengtha+1;i++)
		{
             delete [] sol[i];
			 
		}
		

		delete[] sol;
		return retval;
	}





