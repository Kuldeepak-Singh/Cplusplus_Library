#include"union_find.h"
#include<iostream>

using namespace std;
quickfind ::  quickfind()
	{
	
		for(int i =0 ;i < N;i++)
		{
		
		id[i] = i;
		}
	}

void quickfind :: addedge (int i , int j)
{

    int temp = id[i];

	for (int k=0;k<N;k++)
	{
	
		if (id[k]== temp)
			id[k] = id[j];
	}

}

bool quickfind ::  isconnected (int i , int j)
{


	return (id[i] == id[j]);
}

void quickfind :: print (int k)
{

	for (int i =0; i<=k;i++)
		cout<<id[i]<<endl;
}

quickunion :: quickunion ()
{

	for(int i =0 ;i < N;i++)
		{
		
		id[i] = i;
		weight[i]=0;
		}

}

void quickunion :: addedge (int i , int j)
{
	if (weight[root(i)] > weight[root(j)])
	{
		id[root(j)] = root(i);
		weight[root(i)]+=1;
	

	}

	else
	{
	id[root(i)] = root(j);
		weight[root(j)]+=1;
	
	}

}

int quickunion :: root (int i)
{

	while (i != id[i])
	{
	
		id[i] = id[id[i]];
	
		i = id[i];

		
	}
	 
	return i;
}

bool quickunion ::isconnected (int i , int j)
{

	return (root(i)==root(j));

}

void quickunion ::print (int i)
{

	for(int k=0 ; k<=i ; k++)
		cout<<id[k]<<" ";


}