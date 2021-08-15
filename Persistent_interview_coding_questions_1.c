//Level 1


//Print the pattern
//Closest Number
//Print the Kth Digit
//Binary number to decimal number
//Check if jumping number
//GCD of array

//Factorial of a large number
//Compute nPr
//Compute nCr
//Largest prime factor
//Pair cube count
//Find Nth root of M



//Array:


//Array (insert,search,delete)
//Reverse the array
//Rotate Array


//Find the "Kth" max and min element of an array 
//Move all the negative elements to one side of the array 
//Find the Union and Intersection of the two sorted arrays.
//find all pairs on integer array whose sum is equal to given number
//Rearrange the array in alternating positive and negative items with O(1) extra space
//Find if there is any subarray with sum equal to 0
//Find the triplet that sum to a given value
//Median of 2 sorted arrays of equal size
//Median of 2 sorted arrays of different size




//String :


//Reverse a String
//Find Duplicate characters in a string
//Print all Subsequences of a string.
//Print all the permutations of the given string
//Check for palindrome
//Check for anagram
//Anagram Palindrome
//Title case conversion
//longest string pallindrome
//Sort the string
//Merge two strings
//Good or Bad string
//Find the first repeated word in string.
//Check if two given strings are isomorphic to each other
//Reverse words in a given string
//Anagram Search
//First repeating character
//First non-repeating character




//for N = 2 the pattern will be 
//2 2 1 1
//2 1
//for N = 3 the pattern will be 
//3 3 3 2 2 2 1 1 1
//3 3 2 2 1 1
//3 2 1









#include<stdio.h>

int fact(int n)
{
	if (n <= 1)
		return 1;
	return n*fact(n-1);
}

int nPr(int n, int r)
{
	return fact(n)/fact(n-r);
}

int main()
{
	int n, r;
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Enter r: ");
	scanf("%d", &r);

	printf("%dP%d is %d", n, r, nPr(n, r));

	return 0;
}








// CPP program To calculate The Value Of nCr
#include <bits/stdc++.h>
using namespace std;

int fact(int n);

int nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

// Driver code
int main()
{
	int n = 5, r = 3;
	cout << nCr(n, r);
	return 0;
}



// C++ program to count pairs whose sum
// cubes is N
#include<bits/stdc++.h>
using namespace std;

// Function to count the pairs satisfying
// a ^ 3 + b ^ 3 = N
int countPairs(int N)
{
	int count = 0;

	// Check for each number 1 to cbrt(N)
	for (int i = 1; i <= cbrt(N); i++)
	{
		// Store cube of a number
		int cb = i*i*i;

		// Subtract the cube from given N
		int diff = N - cb;

		// Check if the difference is also
		// a perfect cube
		int cbrtDiff = cbrt(diff);

		// If yes, then increment count
		if (cbrtDiff*cbrtDiff*cbrtDiff == diff)
			count++;
	}

	// Return count
	return count;
}

// Driver program
int main()
{
	// Loop to Count no. of pairs satisfying
	// a ^ 3 + b ^ 3 = i for N = 1 to 10
	for (int i = 1; i<= 10; i++)
		cout << "For n = " << i << ", "
			<< countPairs(i) <<" pair exists\n";

	return 0;
}




// C++ implementation to find the
// Kth root of a number using log

#include <bits/stdc++.h>

// Function to find the Kth root
// of the number using log function
double kthRoot(double n, int k)
{
	return pow(k,
			(1.0 / k)
				* (log(n)
					/ log(k)));
}

// Driver Code
int main(void)
{
	double n = 81;
	int k = 4;
	printf("%lf ", kthRoot(n, k));
	return 0;
}






// C++ program to convert binary to decimal
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
	int num = 10101001;

	cout << binaryToDecimal(num) << endl;
}






//The GCD of three or more numbers equals the product of the prime factors common to all the numbers,
//but it can also be calculated by repeatedly taking the GCDs of pairs of numbers. 
//For an array of elements, we do the following. We will also check for the result if the result at any step becomes 1
//we will just return the 1 as gcd(1,x)=1.  

// C++ program to find GCD of two or
// more numbers
#include <bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if(result == 1)
		{
		return 1;
		}
	}
	return result;
}

// Driver code
int main()
{
	int arr[] = { 2, 4, 6, 8, 16 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findGCD(arr, n) << endl;
	return 0;
}






//We find value of n/m. Let this value be q. Then we find closest of two possibilities. 
//One is q * m other is (m * (q + 1)) or (m * (q – 1)) depending on whether one of the given two numbers is negative or not.
// C++ implementation to find the number closest to n
// and divisible by m
#include <bits/stdc++.h>

using namespace std;

// function to find the number closest to n
// and divisible by m
int closestNumber(int n, int m)
{
	// find the quotient
	int q = n / m;
	
	// 1st possible closest number
	int n1 = m * q;
	
	// 2nd possible closest number
	int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
	
	// if true, then n1 is the required closest number
	if (abs(n - n1) < abs(n - n2))
		return n1;
	
	// else n2 is the required closest number
	return n2;
}

// Driver program to test above
int main()
{
	int n = 13, m = 4;
	cout << closestNumber(n, m) << endl;
	
	n = -15; m = 6;
	cout << closestNumber(n, m) << endl;
	
	n = 0; m = 8;
	cout << closestNumber(n, m) << endl;
	
	n = 18; m = -7;
	cout << closestNumber(n, m) << endl;
	
	return 0;
}




