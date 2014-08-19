#include"Stringplay.h"
#include<string>
#include<iostream>
#include"basichelperfunctions.h"
using namespace std;

void strrevsplit (char *sentence )
{
	int count=0;
	int begin =0;
	char *temp = sentence;
	while (*temp !='\0')
	
	
	{
	
		if (*temp == ' ')
		{
		
			for (int i=0 ; i<((count-begin)/2);i++)
			{
			

				charswap (&sentence[count-i-1],&sentence[begin+i]);
			}
		   begin = count+1;
		}
		temp++;
		count++;
		
	
	
	}

	for (int i=0 ; i<((count-begin)/2);i++)
			{
			

				charswap (&sentence[count-i-1],&sentence[begin+i]);
			}

}
void reversewords (char *sentence , int length )
{

	if (sentence == NULL)
		return;

	strrev(sentence);
	
	strrevsplit (sentence );



}



void compressstring (char *s)
{

	if (s== NULL)
		return;

	int currentindex = 0;
	int index=0;
	 
	char *current = s;
	currentindex++;
	char currentchar= s[0];
	int freqcount=1;
	while (current[currentindex] !='\0')
	{
	
		if (current[currentindex] == currentchar)
		{
		
			freqcount++;
		}

		else
		{
			current[index] = currentchar;
		    currentchar = current[currentindex];
	
			current[index+1] = '0' +freqcount;
			index+=2;

			freqcount=1;
			//currentindex++;
		}
		
		currentindex++;
	}

	current[index] = currentchar;
	current[index+1]='0' +freqcount;

	current[index+2]='\0';
}