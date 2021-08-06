//Accenture
//Find the number of distinct elements in array and return the count of the number of distinct elements
#include <iostream>
#include <string.h>

using namespace std;

int findCount(int arr[],int length)
{
	int count=0;
	int i,j;
	int flag;
	for(i=0;i<length;i++)
	{
		flag=0;
		for(j=i+1;j<length;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		count++;
	}	
	return count;
}


int main()
{
	int i,n,count=0;
	cin>>n;
	int arr[n];
	
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int k=findCount(arr,n);
	cout<<"Count is:"<<k;
}











