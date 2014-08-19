#include"Array_Problems.h"
#include<iostream>
#include"basichelperfunctions.h"
#include<stack>
#include<algorithm>
using namespace std;


int maximumsumpathproblem (int a[] , int lengtha , int b[] ,int lengthb)
{
	int i=0;
	int j=0;

	int suma=0;
	int sumb=0;
	while ( i<lengtha && j<lengthb)
	{
	
	
		if (a[i] < b[j])
		{
		
			suma = suma + a[i];
			i++;
		}

		else if (a[i] > b[j])
		{
		
			sumb = sumb+b[j];
			j++;
		}

		else
		{
		
			int sum = a[i]+ MAX(suma , sumb);
			suma = sum;
			sumb = sum;
			i++;
			j++;
		
		}
	
	}

	while (i<lengtha)
	{
	
		suma = suma+a[i];
		i++;
	}

	while (j<lengthb)
	{
	
		sumb = sumb+b[j];
		j++;
	}


	return MAX (suma , sumb);
}

void printfibonacci (unsigned long long limit )
{
	
	if (limit <0)
	{
		cout<< "Input Error";
		return ;
	}

	if (limit==1)
	{
		cout<<"1";
		return ;
	}
	unsigned long long *a = new unsigned long long[limit];

	a[0] = 1;
	a[1]=1;
	unsigned long long evensum=0;
//	cout<<a[0]<<endl;
	//cout<<a[1]<<endl;
	unsigned long long i=1;
	while (a[i] <=limit)
	{
	   // cout << a[i]<<endl;

		if (a[i] %2==0)
		{
		
			evensum = evensum+a[i];
		}
		i++;
		a[i] = a[i-1]+a[i-2];
		
	}
	cout<<(unsigned long long)evensum;
	delete[] a;
}

int * allpoesvisibleatheighti (int a[] , int length)
{
	stack<as> mystack;
	as *temp = new as[length];
	static int *b = new int[length];
	//memset(b,0,sizeof(b
	for (int k=0 ;k<length;k++)
		b[k]=0;
	int i=1;
	int popcount=0;
	if (length <=1)
		return 0;
	for (int k=0 ;k<length;k++)
	{
		temp[k].index = k;
		temp[k].val = a[k];
	}
	mystack.push(temp[0]);
		as tempv;
	while (i < length)
	{
	
		if (a[i] < mystack.top().val)
		{
		
			mystack.push(temp[i]);
		}

		else if (a[i] >= mystack.top().val)
		{
		
			while (!mystack.empty() && mystack.top().val <a[i])
			{
				 tempv = mystack.top();
			mystack.pop();
				
			b[tempv.index]=b[tempv.index] + (i-tempv.index);
				
				
			}
			
			mystack.push(temp[i]);
		}
	   
		i++;
	}
	popcount=0;
	
	while (!mystack.empty())
	{
		tempv=mystack.top();
		mystack.pop();
		b[tempv.index] = b[tempv.index] + length-tempv.index-1;
	}
	i = length-1;
	mystack.push(temp[i]);
	i--;
	while (i >=0)
	{
	
		if (a[i] < mystack.top().val)
		{
		
			mystack.push(temp[i]);
		}

		else if (a[i] >= mystack.top().val)
		{
		
			while (!mystack.empty() && mystack.top().val <a[i])
			{
				 tempv = mystack.top();
			mystack.pop();
				
			b[tempv.index]=b[tempv.index] + (tempv.index-i);
				
				
			}
			
			mystack.push(temp[i]);
		}
	   
		i--;
	}
		while (!mystack.empty())
	{
		tempv=mystack.top();
		mystack.pop();
		b[tempv.index] = b[tempv.index] + tempv.index;
	}
	// PRINTING

	for (int i=0 ; i<length;i++)
		cout<<b[i];

	return b;
}

void alternatenegativepositive (int a[] , int length)
{

	if (length <=1)
		return;

	int i=-1;

	for (int j=0 ; j<length;j++)
	{
	
		if (a[j]<0)
		{
		
			i++;
			swap(a[i],a[j]);
		}
	}

 if (i==-1 || i==(length-1))
	return;

   int negindex = 0;
   int posindex = i+1;

   while (posindex <length)
   {
     if (a[negindex] >0)
		 break;
	   swap(a[negindex],a[posindex]);

	   negindex+=2;
	   posindex+=1;
   }


}
template <typename T> 
void printarray (T a[], int length)
{

	for (int i=0 ; i<length;i++)
		cout<<a[i];

}


bool compare (intrevals a , intrevals b)
{
	return (a.start<b.start?true:false);
}


void compressingintervals (intrevals a[] , int length)
{
	intrevals *temp = new intrevals [length];

	sort(a,a+length,compare);

	temp[0]=a[0];
	int j=0;
	for (int i=1 ; i<length;i++)
	{
		if (a[i].start > temp[j].end )
		{
		    j++;
			temp[j].start=a[i].start;
			temp[j].end=a[i].end;
			
		}

		else if (a[i].end > temp[j].end)
		{
			temp[j].end=a[i].end;
		
		}

		

	}


	for (int i=0;i<=j;i++)
	{
	
		cout<<"("<<temp[i].start<<","<<temp[i].end<<")"<<endl;
	}
}

bool comp ( as data1 , as data2)
{

	if ((data1.index == -1) && (data2.index ==-1))
		return (data1.val < data2.val ? true :false);

	else if ((data1.index==-1) && (data2.index!=-1))
		return false;
	else if ((data1.index!=-1) && (data2.index==-1))
		true;
	else
		return (data1.index < data2.index ? true :false);
}

void sortbasedonmyorder (int arr[] , int length , int myorder[] , int length2)
{

	as *newas = new as [length];

	for (int i=0 ; i<length;i++)
	{
	
		int *retindex =find(myorder,myorder+length,arr[i]);

		
			newas[i].index = (retindex-arr) ;
		newas[i].val = arr[i];
		
	}

/*	for (int i=0 ; i<length;i++)
	{
		cout<<newas[i].val<<" "<<newas[i].index<<endl;

	}*/
	sort (newas,newas+length,comp);

	for (int i=0 ; i<length;i++)
	{
		arr[i] = newas[i].val;
	}

}


void LCS (char a[] , char b[] , int m , int n)
{

	int **temp = new int *[m+1];

	int lengthvar = MIN(m,n);

	char *s = new char [lengthvar];
	int k=0;
	for (int i=0 ; i<m+1;i++)
		temp[i] = new int [n+1];

	for  (int i=0 ; i<m+1 ; i++)
	{
		for (int j=0;j<n+1;j++)
		{
			if (i==0 || j==0 )
				temp[i][j] = 0;

			else if (a[i-1] == b[j-1])
			{
			    temp[i][j] = 1 + temp[i-1][j-1];
				s[k] = a[i-1];
				k++;
			}

			else
				temp[i][j] = MAX(temp[i-1][j] , temp[i][j-1]);
		}
	}

	s[k] = '\0';
	cout<<"LCS Length "<<temp[m][n]<<endl;
	cout<< "LCS characters " <<s<<endl;
	for (int i=0 ; i<m+1;i++)
		delete [] temp[i];

	delete[] temp;
	delete[] s;
	
}

// N2 Dynamic Programming Approach

int longestcommonsubsequencebrute (int a[] , int length)
{
	int maxlength=0;;

	int *seq = new int [length];
	int *prev = new int [length];
	for (int i=0 ;i<length;i++)
		seq[i]=1;
	int bestsofar=0;
	prev[0]=-1;
	
	for (int i=1 ; i<=length-1;i++)
	{
		int min = a[i];
		int length=1;
	    prev[i] = -1;
		for (int j=i-1 ; j>=0;j--)
		{
		
			if (a[j] < a[i] && seq[j]+1 > seq[i])
			{
			
				  seq[i] = seq[j]+1;
				  prev[i] = j;
				  length = seq[i];;
			}
		}

		if (length > maxlength)
		{
		
			bestsofar = i;
			maxlength = length;
		}
	}

	cout<< " LIS length is " << maxlength<<endl;
	cout<< " LIS Sequence  is ";//<<a[bestsofar]<<" "; ;
	while (prev[bestsofar] != -1 )
	{
	
		cout<< a[bestsofar]<< " ";
		bestsofar = prev[bestsofar];
	}
	cout<< a[bestsofar]<< " ";

	return maxlength;

	delete[] seq;
	delete[] prev;
}

// NLogn Dynamic Programming Approach