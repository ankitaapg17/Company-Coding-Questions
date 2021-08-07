//Count of unique digits in a given number N

//The idea is to use Hashing to store the frequency of the digits and then count the digits with a frequency equal to 1. 
//Follow the steps below to solve the problem:
// 
//
//Create a HashTable of size 10 for digits 0-9. Initially store each index as 0.
//Now for each digit of number N, increment the count of that index in the hashtable.
//Traverse the hashtable and count the indices that have value equal to 1.
//At the end, print/return this count.

// C++ program for the above approach
#include <iostream>
using namespace std;

// Function that returns the count of
// unique digits of the given number
int countUniqueDigits(int N)
{
	// Initialize a variable to store
	// count of unique digits
	int res = 0;

	// Initialize cnt array to store
	// digit count
	int cnt[10] = { 0 };

	// Iterate through the digits of N
	while (N > 0) {

		// Retrieve the last digit of N
		int rem = N % 10;

		// Increase the count
		// of the last digit
		cnt[rem]++;

		// Remove the last digit of N
		N = N / 10;
	}

	// Iterate through the cnt array
	for (int i = 0; i < 10; i++) {

		// If frequency of
		// digit is 1
		if (cnt[i] == 1) {

			// Increment the count
			// of unique digits
			res++;
		}
	}

	
	return res;
}


int main()
{
	
	int N = 2234262;

	
	cout << countUniqueDigits(N);
	return 0;
}











