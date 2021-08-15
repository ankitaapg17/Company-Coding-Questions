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
//Count of smaller elements
//Remove duplicate elements from sorted Array
//Merge 2 sorted arrays without using Extra space.
//Find the "Kth" max and min element of an array 
//Move all the negative elements to one side of the array 
//Find the Union and Intersection of the two sorted arrays.
//find all pairs on integer array whose sum is equal to given number
//Rearrange the array in alternating positive and negative items with O(1) extra space
//Find if there is any subarray with sum equal to 0
//Find the triplet that sum to a given value
//Median of 2 sorted arrays of equal size
//Median of 2 sorted arrays of different size
//
//
//
//
//String :
//
//
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




int main()
{
	int num, difference=0;    
boolean flag = true;  
Scanner sc = new Scanner(System.in);  
System.out.print("Enter a number: ");  
//reads an integer from the user  
num=sc.nextInt();  
//assigning num to n  
int n = num;  
//execute until the condition becomes false  
while(num != 0)  
{  
//determines the last digit from the given number      
int digit1 = num % 10;  
//removes the last digit   
num = num/10;  
//checks if the number is equal to 0 or not  
if(num != 0)  
{  
//if the above condition returns true  
//determines the second last digit from the number  
int digit2 = num % 10;  
//subtract the digits and finds the absolute value  
//after that checks if the difference of two adjacent digit is equal to 1 or not  
if(Math.abs(digit1 - digit2) != 1)  
{  
//if the difference is not equal to 1, set flag to false      
flag = false;  
//breaks the execution  
break;  
}//end of if 2nd statement   
}//end of if 1st statement   
}//end of while  
if(flag)  
System.out.println(n + " is a jumping number.");  
else  
System.out.println(n + " is not a jumping number.");  
}  
}  
}





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


