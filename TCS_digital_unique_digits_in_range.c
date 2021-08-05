//The output consists of a single line, print the count of unique digits in a given range. Else Print"No Unique Number"

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,ur,lr;
	int d,rem=0;
	int count=0;
	printf("Enter the lower range: ");
	scanf("%d",&lr);
	printf("Enter the upper range: ");
	scanf("%d",&ur);
	for(i=lr;i<=ur;i++)
	{
		int l=i;
		while(l>0)
		{
			d=l%10;
			rem=rem*10+d;
			l=l/10;
		}
		if(rem!=i)
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






