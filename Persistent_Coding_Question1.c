//he now wants to write a code to find the number of elements lies between ranges alpha1 and alpha2. 
//If the number is arr and the starting and ending points are alpha1 and alpha2, find the numbers of elements lies in the range.

//Input:
//	
//Three space-separated integers
//First is the length of arr.
//Second is the starting point as alpha1.
//The third is the endpoint as alpha2.
//N space-separated array elements.
//Output:
//	
//Space-separated indexes between alpha1 and alpha2.
//
//Example:
//Input:
//9 2 6 1 2 3 4 5 6 7 8 9
//Output:
//1 2 3 4
//

#include <stdio.h>
#include <conio.h>

int main()
{
	int i,n,first,last,arr[10];
	scanf("%d %d %d",&n,&first,&last);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=first;i<last;i++)
	{
		printf("%d ",i-1);
	}
	
}






