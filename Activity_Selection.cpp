#include<vector>
#include<iostream>
#include <algorithm>   
using namespace std;

struct mystruct
{

	int start ;
	int end;
};
bool customCompare (struct mystruct &s1 , struct mystruct &s2)
{

	return (s1.end < s2.end);

}
void activitySelection (int start[] , int end[] , int startlength)
{

	vector<mystruct> myvector;

	struct mystruct *temp = new struct mystruct [startlength];

	for (int i=0; i<startlength;i++)
		{temp[i].start = start[i];
	temp[i].end = end[i];
	}

	myvector.assign(temp , temp+startlength);

	sort(myvector.begin() , myvector.end(),customCompare);
	copy (myvector.begin(),myvector.begin()+ startlength, temp);

	int k=0;
	cout<<endl<<"Activity "<<temp [k].start<<" " << temp[k].end;
	for (int j=1;j<startlength;j++)
	{
		if(	temp[k].end <= temp[j].start)
		{
		
			cout<<endl<<"Activity "<<temp [j].start<<" " << temp[j].end;
		    k=j;
		}

	}





}


