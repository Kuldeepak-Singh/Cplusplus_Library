#include"Rat_Maze_Problem.h"
#include<iostream>

using namespace std;


int istherepathmattrixutil (int m[M][N], int path [M][N] , int x , int y);

bool issafe (int m[M][N], int x , int y);


void print (int m[M][N]);

int istherepathmattrix (int m [M][N])
{
	
	int path[M][N] = {0}; 

	bool result = istherepathmattrixutil ( m ,  path , 0,0);

	return result;
}

int istherepathmattrixutil (int m[M][N], int path [M][N] , int x , int y)
{

	if (x==M-1 && y==N-1)
	{
		 path[x][y]=1;
		print (path);
	   return true;
	}

	if (issafe (m, x, y ))
	{
	   path[x][y]=1;
		if (istherepathmattrixutil (m,path,x,y+1))
			return true;

		if(istherepathmattrixutil (m,path,x+1,y))
	         return true;

		path[x][y]=0; // BackTracking
	
	}

	return false;

}

bool issafe (int m[M][N], int x , int y)
{

	if ( x<=M && y<=N  && m[x][y] ==1)
		return true;
	return false;
}

void print (int m[M][N])
{

	for (int i = 0 ;  i<M;i++)
	{
	
		for (int j=0; j<N;j++)
		{
		
			cout<<m[i][j] << " " ;
		
		}
		cout<<endl;
	}

}

int numofwaystoreachexit (int m[M][N])
{

	int sol [M][N] = {0};

	sol[M-1][N-1] =1;

	for (int i=M-1 ;i>=0;i--)
	{
	
		for (int j=N-1 ;j>=0;j--)
		{
		
			if (m[i][j] !=0)
			{
			
				if (i+1 < M)
					sol[i][j] = sol[i][j] + sol[i+1][j];
			  if (j+1 <N)
                     sol[i][j] = sol[i][j] + sol[i][j+1];
			}
		
		}
	
	}

	return sol[0][0];

}