//Print the pattern 
//2
//4 8
//16 32 64
//128 256 512 1024



#include <stdio.h>

int main()
{
	int i,j;
	int m,n,term=2;
	scanf("%d %d",&m,&n);
	for(i=1;i<m;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",term);
			term=term*2;
		}
		printf("\n");
	}
	
	
	
}
