#ifndef _SUFFIX_ARRAY_H_
#define _SUFFIX_ARRAY_H_
#include<string>
using namespace std;
typedef struct suffixstruct 
{
	int index;
	char *start;
}ss;

void constructsuffixarray (string str , int a[] , int length);
#endif