//Write a program to calculate the sum of elements of an array that are equal to the integer entered by the user. 
//The inputs will be the size of the array, elements of the array, and an integer. 
//You have to print the sum calculated after adding all the elements that match the integer entered by the user.
//Input:
//8
//
//1 2 3 4 2 5 6 2
//
//2
//
//Output:
//6

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,j,sum=0,a[100],key;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			sum=sum+key;
		}
	}
	printf("%d",sum);
	
}








