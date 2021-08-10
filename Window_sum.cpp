

//This technique shows how a nested for loop in some problems can be converted to a single for loop to reduce the time complexity.

//We can use this technique to find max/min k-subarray, XOR, product, sum, etc. 
//Refer sliding window problems for such problems. 




//Given an array of integers of size ‘n’.
//Our aim is to calculate the maximum sum of ‘k’ 
//consecutive elements in the array.

// O(n*k) solution for finding maximum sum of
// a subarray of size k
#include <bits/stdc++.h>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
	// Initialize result
	int max_sum = INT_MIN;

	// Consider all blocks starting with i.
	for (int i = 0; i < n - k + 1; i++) {
		int current_sum = 0;
		for (int j = 0; j < k; j++)
			current_sum = current_sum + arr[i + j];

		// Update result if required.
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}

// Driver code
int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}



//Applying sliding window technique : 
//
//We compute the sum of first k elements out of n terms using a linear loop and store the sum in variable window_sum.
//Then we will graze linearly over the array till it reaches the end and simultaneously keep track of maximum sum.
//To get the current sum of block of k elements just subtract the first element from the previous block 
//and add the last element of the current block .



// O(n) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
	// n must be greater
	if (n < k) {
		cout << "Invalid";
		return -1;
	}

	// Compute sum of first window of size k
	int max_sum = 0;
	for (int i = 0; i < k; i++)
		max_sum += arr[i];

	// Compute sums of remaining windows by
	// removing first element of previous
	// window and adding last element of
	// current window.
	int window_sum = max_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		max_sum = max(max_sum, window_sum);
	}

	return max_sum;
}

// Driver code
int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}




//XOR code
//For every pair of bits, check if both are the same, set the corresponding bit like 0 in output, otherwise set as 1. 


// C++ program to find XOR without using ^
#include <iostream>
using namespace std;

// Returns XOR of x and y
int myXOR(int x, int y)
{
return (x | y) & (~x | ~y);
}

// Driver program to test above function
int main()
{
int x = 3, y = 5;
cout << "XOR is " << myXOR(x, y);
return 0;
}























