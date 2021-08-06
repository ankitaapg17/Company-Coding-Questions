//The output consists of a single line, print the count of unique digits in a given range. Else Print"No Unique Number"

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isUnique(int num)
{
	bool unique[10];
	int digit;
	while(num>0)
	{
		digit=num%10;
		if(unique[digit])
		{
			return false;
		}
		else
		{
			unique[digit]=1;
		}
		num=num/10;
	}
	return true;
	
}



int main()
{
	int n,i,ur,lr;
	int d,rem=0;
	int count=0;//check
	printf("Enter the lower range: ");
	scanf("%d",&lr);
	printf("Enter the upper range: ");
	scanf("%d",&ur);
	for(i=lr;i<=ur;i++)
	{
		if(isUnique(i))
		{
			count++;
		}
		
		
	}
	if(count==0)
	{
		printf("No unique number");
	}
	else
	{
		printf("%d",count);
	}
	
	
	
}






