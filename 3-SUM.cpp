#include<iostream>
#include<vector>
#include <algorithm>   
using namespace std;
void three_SUM_Problem (int a[] , int start , int end , int sum)
{

	vector<int> myvector;

	myvector.assign(a, a+(end-start+1));

	std::sort(myvector.begin() , myvector.end());

	copy(myvector.begin() , myvector.end(),a);

//	sort(a,a+(start-end));

	/*for (vector<int> ::iterator it= myvector.begin();(it != (myvector.end()));it++)
		cout<<*it<<endl;*/
	int i = start ;

	int j =i+1;

	int k = end;
	while (i < (end-2))
	{
	
		while (j<k)
		{
		
			if (a[i]+a[j]+a[k] > sum)
			{
			
				k--;
			
			}
			else if (a[i]+a[j]+a[k] < sum)
			{
			
				j++;
			}

			else
			{
			    
				cout<<endl<<"elements are" <<a[i]<<endl << a[j] <<endl<< a[k];
				break;
			
			}
		
		}

		i++;
	
	}
	
}