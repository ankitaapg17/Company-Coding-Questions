//Print the number at the given index of the series 1 1 2 3 5… and so on. Consider the index as the number and print the value

#include <stdio.h>
#include <conio.h>

int main()
{
	int prev=0,curr=1,next=1;
	int i,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		next=prev+curr;
		prev=curr;
		curr=next;
		
	}
	printf("%d",next);
	
	
}






