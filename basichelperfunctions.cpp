

#include"basichelperfunctions.h"
#include<iostream>
#include<map>
#include<string>
#include<queue>
using namespace std;
void intswap (int *a , int *b)
{

	*a = *a ^  *b;
	*b = *a ^  *b;
	*a = *a ^  *b  ;

}

void charswap (char *a , char *b)
{

	*a = *a ^  *b;
	*b = *a ^  *b;
	*a = *a ^  *b  ;

}

int binarysearchincreasing (int a[] , int start ,int end, int item)
{
	
	while (start<=end)
	{
	
		int mid = start + ((end-start)/2);

		if (a[mid]== item )
		{
		
			return mid;
		
		}

		else if (a[mid] < item)
		{
		
			start = mid+1;
		
		}

		else 
		{
		
			end = mid-1;
		}
	
	
	}
	return -1;
}

int binarysearchdecreasing (int a[] , int start ,int end, int item)
{
	
	while (start<=end)
	{
	
		int mid = start + ((end-start)/2);

		if (a[mid]== item )
		{
		
			return mid;
		
		}

		else if (a[mid] < item)
		{
		    end = mid-1;
			
		
		}

		else 
		{
		
			start = mid+1;
		}
	
	
	}
	return -1;
}


int binarysearchincreasingfirstoccourance (int a[] , int start ,int end, int item)
{
	int currentindex  = INT_MAX;
	
	while (start<=end)
	{
	
		int mid = start + ((end-start)/2);

		if (a[mid]== item )
		{
		    currentindex = mid;
			end = mid-1;
		
		}

		else if (a[mid] < item)
		{
		
			start = mid+1;
		
		}

		else 
		{
		
			end = mid-1;
		}
	
	
	}
	return currentindex;
}


int firstnonrepeatring (int a[] , int length)
{

	map<int,int> myMap;

	for (int i=0;i<length;i++)
	{
	
		if(myMap.find(a[i]) !=  myMap.end())
		{
			myMap[a[i]]+=1;
		
		}

		else
		{
		
			myMap[a[i]]=1;
		}
	}

for (int i=0;i<length;i++)
	{

	if(	myMap[a[i]] ==1 )
		return a[i];
}

return -1; 

}
struct cmp_str
{
bool operator() (const char *s1 ,const char *s2)
{

	int retval = strcmp (s1,s2);

	if (retval<0)
		return true;

	return false;
}
};

void numberofoccouranceofwords (char * str )
{
	string tempstr;
	if (str== NULL )
		return ;

	map< const char * , int,cmp_str> myMap;

	char * temp = strtok (str ," ");

	while (temp)
	{
	//	tempstr.assign(temp,temp+strlen(temp));
	     if (myMap.find(temp) != myMap.end())
		 {
		    myMap[temp] = myMap[temp] +1;
		 }


		 else
		 {
		 
			 myMap[temp]=1;
		 }


		temp = strtok (NULL ," ");
	}


	map<const char * , int,cmp_str> :: iterator it;

	for (it = myMap.begin(); it != myMap.end();it++)
		cout<<it->first << " " << it->second;
}

class mycomparison
{
	bool comp ;
public :
	 mycomparison (const bool & res = false)
	 {
	 
		 comp = res;

	 }

	 bool operator () (const hn2 & lhs , const hn2 &rhs)
	 {
	 
		// if (comp==false)
		//	 return lhs.data < rhs.data;

		// else
			 return lhs.data>rhs.data;
	 }
};

void find10thnumberinseries (int a , int b , int nth)
{
  std::priority_queue<hn2,std::vector<hn2>,mycomparison> myqueue;
   
   // vector<hn2> myvector;



    int arr[100][100] = {0};

    for (int i=0;i<nth ;i++)
    {
   
        for (int j=0;j<nth;j++)
        {
       
            arr[i][j]  =  pow ((double)a , i) * pow ((double) b , j); 
       
        }
    }

  for (int i=0 ;i<nth;i++)
  {
    hn2 newnode ;
    newnode.coloumn = 0;
    newnode.row = i;
    newnode.data = arr[i][0];
  myqueue.push(newnode );
  }		

  while (nth+1)
  {
 
 hn2 newnode  = myqueue.top();

 if (nth == 0)
     cout<<newnode.data;
     myqueue.pop();
 //hn2 temp;
 newnode.data = arr[newnode.row][(newnode.coloumn)+1];
 newnode.coloumn = newnode.coloumn+1;


 myqueue.push (newnode);
   
 
 
   

      nth--;
  }
}


void printbinaryfromiton (int n)
{

	if (n==0 )
	{
		cout<<'0'<<endl;
		return;
	}

	if (n==1)
	{
		cout<<'0'<<endl<<'1'<<endl;
		return;
	}

	/*char *a[100]={'\0'};
	int index=0;

	a[0] = "1";
	int currentindex=0;
	while (n)
	{
	
		cout<<a[currentindex]<<endl;
		++index;
		a[index] = new char[currentindex+2];
		memset(a[index],0,sizeof(a[index]));
		strcpy(a[index],a[currentindex]);
		 strcat(a[index],"0");
		 ++index;
		a[index] = new char[currentindex+2];
		memset(a[index],0,sizeof(a[index]));
		
		strcpy(a[index],a[currentindex]);
		strcat (a[index],"1");

		currentindex++;
		n--;
	}
	*/

	string *s = new string [100];
	memset (s,0,sizeof(s));
	int currentindex =0;
	int index=0;

	s[index].append("1");

	while(n)
	{
	
		cout<<s[currentindex]<<endl;

		
		s[++index].append(s[currentindex]);

		s[index].append("0");

				
		s[++index].append(s[currentindex]);

		s[index].append("1");
	

		currentindex++;
		n--;
	}
}

long long int powerlognhelper (long long int a ,long long int b)
{

	if (b==0)
		return 1;

	long long int power = a * a;



	for (long long int i=2 ; i <b ; i = i*i)
	{
	
		power = power * power ;
	}


	
	return power;
}
long long int powerlogn (long long int a , long long int b )
{
	long long int totalpower = 1;

	int flag =1;

	while (flag < b )
	{
	
		flag = flag <<1;
	}

	flag = flag >>1;

	while (flag >1)
	{
	
		if (b - flag >=0 )
		{
		    
			b = b -flag;
			int power =powerlognhelper (a , flag);
			totalpower = totalpower * power;
		}

		flag= flag>>1;
	}

		if (b %2 ==1 )
		totalpower = totalpower *a;

		return totalpower;
}

