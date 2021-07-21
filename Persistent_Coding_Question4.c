//For the generation of energy at the atomic center the energy is used to start the plant is in negative sign 
//and the energy generated after the plant started is represented with a positive sign. 
//Our task is to calculate the total number of energy that is generated throughout the day.

//Input:
//8 1 4 -5 6 7 -4 4 -1
//Output:
//12

#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,sum=0,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
	
	
}




