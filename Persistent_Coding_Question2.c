//Find the security key to access the bank account in from the encrypted message. 
//The key in the message is the first repeating number from the given message of numbers.

//Input:
//123456654321
//Output:
//1

//Find the first repeated character
#include <stdio.h>
#include <string.h>

int main()
{
	//To take input from user without knowing size, till new line is encountered
	char a[100],first;
	int i,j,len,flag=0;
	scanf("%s",a);
	len=strlen(a);
	
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j] && flag==0)
			{
				first=a[i];
				//printf("%c",a[i]);
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("First repeated character: %c",first);
	}
	else
	{
		printf("No repetition");
	}
}





