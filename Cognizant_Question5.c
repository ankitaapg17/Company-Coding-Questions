//Sort the array and find the missing number
// 3 7 8 5 4 2 1
//missing number- 6
//nlogn time complexity

//sum of natural numbers-sum of elements in array
//formula-sum 
//O(n)

//In fibonacci series- the division of current/previous=1.6 (Golden Ratio)

#include <stdio.h>
int main()
{
	int arr[10],i,n,sum=0;
	printf("Enter the size:");
	scanf("%d",&n);
	int total=((n+1)*(n+2))/2;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	
	int result=(total-sum);
	printf("The missing element is:%d",result);
	
	
	
}








