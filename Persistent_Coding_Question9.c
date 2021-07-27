//1) Find the maximum occuring character in given string 
//2) Find Kth smallest element in an array
//3) Sum of even & odd frequency elements in an array
//4) From given position (index number) left part should be sorted in ascending order and right in descending order


/* C Program to Find Maximum Occurring Character in a String */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
	for(i = 0; i < len; i++)
  	{
  		printf("%d",freq[str[i]]);
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);
	
  	return 0;
}





//A simple solution is to sort the given array using a O(N log N) sorting algorithm like Merge Sort, Heap Sort, etc,
//and return the element at index k-1 in the sorted array. 

#include <algorithm>
#include <iostream>
using namespace std;
 
// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);
 
    // Return k'th element in the sorted array
    return arr[k - 1];
}
 
// Driver program to test above methods
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}







