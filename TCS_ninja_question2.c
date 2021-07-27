//1.Print the nth term of the series 3,9,27,81,243

#include <stdio.h>

int main()
{
	int i,n,term=3;
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		term=term*3;
	}
	printf("%d",term);
	
}
