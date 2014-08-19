

#include"basichelperfunctions.h"


int findpivot (int a[] , int start , int end)
{
	while (start <end)
	{
	

		int middle  = start + ((end-start)/2);

		if (a[middle] >= a[middle-1] && a[middle] < a[middle] < a[middle+1])
			return middle;

		else if (a[middle] < a[middle-1])
			end = middle-1;
		else if ( a[middle] > a[middle-1])
			start = middle+1;

		else if (a[middle] == a[middle-1] && a[middle] < a[middle] == a[middle+1])
	       start++;
	}
	return -1;
}


int BioTonic3logn (int a[] , int start , int end, int item)
{

	int pivot = findpivot (a , start , end);
	
	if (pivot != -1)
	{
	if (a[pivot] == item)
		return pivot;
	}

	if (pivot ==-1)
		pivot = end;
	int result = binarysearchincreasing (a, start , pivot-1 , item);

	if (result != -1)
		return result;
	result = binarysearchdecreasing (a, pivot+1 ,end  , item);

	return result;

}



int BioTonic2logn (int a[] , int start , int end, int item)
{

	while (start<=end)
	{
	    int mid = start + ((end - start)/2);
		if (a[mid] == item)
			return mid;

		else if ((a[mid] > item )  )

		{
		
			if ( a[mid] < a[end])
				end = mid-1;

			else 
				start = mid+1;
		}
		else if (a[mid] < item)
		{

			if (a[mid] < a[end])
			start = mid+1;
			else
				end= mid-1;
		}


	}

	return -1;

}