#include <iostream>
#include<algorithm>
using namespace std;


int numofwaystoproducrsum (int s[] , int slength , int sum)
{

	int *temp = new int[sum+1];

	fill (temp , temp+sum+1 , 0);
	temp[0]=1;

	for (int i=1; i<=sum;i++)
	{
	
		for (int j=0 ;j<slength;j++)

		{
			if (i-s[j] >=0)
			{
			temp[i] = temp[i] + temp[i-s[j]];
			
			}
		}
	
	}

	int retval = temp[sum];
	delete(temp);

	return retval;
}

int count( int S[], int m, int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    int table[4+1];
 //int *table = new int[n+1];
    // Initialize all table values as 0
    memset(table, 0, sizeof(table));
 
    // Base case (If given value is 0)
    table[0] = 1;
 
    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];
 
    return table[n];
}

int numofwaystoproducesumkd (int val[] , int length , int sum)
{

	int **sol = new int* [length+1];

	for (int i=0; i<length+1;i++)
		sol[i] = new int [sum+1];


	

	
	for (int i=0 ;i<length+1;i++)
	{
	
		for (int j=0;j<sum+1;j++)
			sol[i][j]=0;
	}
	for (int i=0;i<sum+1;i++)
		sol[0][i]=1;
	for (int i=1 ; i<length+1;i++)
	{
	
		for (int j=0; j< sum+1;j++)
		{
		
			if (j-val[i-1] >=0)
			{
			
				sol[i][j] = sol[i][j]+sol[i-val[i]][j-val[i-1]] ;

			
			}
		
		}
	
	}


	int retval = sol[length][sum];

		for (int i=0 ; i<length+1;i++)
		{
             delete [] sol[i];
			 
		}
		

		delete[] sol;
		return retval;




}