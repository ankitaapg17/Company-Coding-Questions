//Given a string, find the second most frequent character in it.

// C Program to Find second most frequent character in a String
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[110],answer;
  	int i, length;
  	int max = -1;
  	
  	int frequency[256] = {0}; 
 
  	printf("\nEnter the String of characters:  ");
  	gets(str);
  	
  	length = strlen(str);
  	
  	for(i = 0; i < length; i++)
  	{
  		frequency[str[i]]++;
	}
  		
  	for(i = 0; i < length; i++)
  	{
		if(max < frequency[str[i]])
		{
			max = freq[str[i]];
			answer = str[i];
		}
	}
	printf("\nThe second most frequent character in a Given String is= %c ", answer);
	
  	return 0;
}



