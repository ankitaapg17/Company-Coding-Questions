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
//Find the Union and Intersection of the two sorted arrays.
//find all pairs on integer array whose sum is equal to given number
//Rearrange the array in alternating (and to the end) positive and negative items with O(1) extra space
//Move all the negative elements to one side of the array 





//String :


//Reverse a String
//Check for pallindrome
//Check for anagram
//Sort the string
//Merge two strings
//Find Duplicate characters in a string
//Title case conversion
//longest string pallindrome
//Find the first repeated word in string.

//Check if two given strings are isomorphic to each other
//Reverse words in a given string
//Anagram Search
//First repeating character
//First non-repeating character
//Find k-th character in string










//Digital questions

//Given an array Arr[ ] of N integer numbers. 
//The task is to rewrite the array by putting all multipliers at the end of the given array.




//Given an array Arr[ ] of N integers and a positive integer K. 
//The task is to Divide the array into two sub array from right after the Kth position and slide the left sub array of K elements to the end.




//For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees per hour. Given the total time of travel in minutes in X.
//The task is to find the total travelling cost in rupees.
//Note : While converting minutes into hours, ceiling value should be considered as the total number of hours.
//For example : If the total travelling time is 90 minutes, i.e. 1.5 hours, it must be considered as 2 hours.
//
//Example :
//Input :
//20 -- r1
//4  -- n
//40 -- r2
//300 -- x
//
//Output :
//120





//Given a sentence cstr, written in a camel case 
//(i.e. every word starts with an uppercase letter and there is no space or punctuation between two consecutive words). 
//The task is to put one space after every word and convert every uppercase letter to lowercase.







//In a shop every item has an alphanumeric code printed on the label. Each consecutive sequence of the digit in a code is to be readed as a multi digit number. The selling price of the product is the sum of the number in the code.
//You are given the alphanumeric code for an item as a string Str. your task is to compute the selling price of the item.
//
//Example 1:
//Input :
//1xyz23
//
//Output :
//24




//Pattern Printing
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




//You are given a string S containing alphanumeric characters. Find out whether the string is a palindrome or not.
//If you are unable to solve it then it may result in the death of Iron Man.

//Example 1:

//Input : S = "I am :IronnorI Ma, i"
//Output : YES

bool saveIronman(string ch)
{
    string n="";
    for(char c:ch){
        if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            if(c>='A'&&c<='Z')
            {
                n+=c+32;
            }
            else
            {
                n+=c;
            }
        }
    }
    for(int i=0;i<n.length()/2;i++)
    {
        if(n[i]!=n[n.length()-i-1])
        return 0;
    }
    return 1;
}





//Median of two sorted array
//Case 1: m+n is odd, the median is at (m+n)/2 th index in the array obtained after merging both the arrays.
//Case 2: m+n is even, the median will be average of elements at index ((m+n)/2 – 1) and (m+n)/2 in the array 
//obtained after merging both the arrays




// A C++ program to put all negative
// numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}

// A utility function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

// Driver code
int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}



#include <stdio.h>
#include <stdbool.h>
int main()
{
	int num, difference=0;    
	bool flag = true;  
	printf("Enter the number: ");

	scanf("%d",&num);
	
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
			if(abs(digit1 - digit2) != 1)  
			{  
				//if the difference is not equal to 1, set flag to false      
				flag = false;  
				//breaks the execution  
				break;  
			}  
		}  
	}

 
	if(flag)  
		printf("%d is a jumping number",n);  
	else  
		printf("%d is not a jumping number",n);  
}  
  




#include <stdio.h>


int ArrayInsert(int arr[],int n)
{
	int pos,i,element;
	printf("Enter the position: ");
	scanf("%d",&pos);
	for(i=n;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	printf("Enter the element to be inserted: ");
	scanf("%d",&element);
	arr[pos]=element;
	
}


int ArrayDelete(int arr[],int n)
{
	int pos,i;
	printf("Enter the position: ");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
}


int ArraySearch(int arr[],int n)
{
	int key,i;
	printf("Enter the key to search: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf("Found at: %d",i);
		}
	}
	
}


int ArrayReverse(int arr[],int n)
{
	int temp;
	int revIndex=0;
	int arrIndex = n-1;
	
	while(revIndex< arrIndex)
	{
		//copy value from original array to reverse array
		temp=arr[revIndex];
		arr[revIndex]=arr[arrIndex];
		arr[arrIndex]=temp;
		
		revIndex++;
		arrIndex--;
	}
}







int main()
{
	int arr[10],n,i;
	printf("%d",n);
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 
	ArrayInsert(arr,n);
	
	printf("After inserting element: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	ArrayDelete(arr,n);
	
	printf("After deleting the element: ");
	for(i=0;i<n-1;i++)
	{
		printf("%d",arr[i]);
	}
	
	ArraySearch(arr,n);
	
	
	
	ArrayReverse(arr,n);
	printf("Array after reversal: ");
	for(i=0;i<n-1;i++)
	{
		printf("%d",arr[i]);
	}
	
	
	
	
	
	
}



//Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
//1) Store the first d elements in a temp array
//   temp[] = [1, 2]
//2) Shift rest of the arr[]
//   arr[] = [3, 4, 5, 6, 7, 6, 7]
//3) Store back the d elements
//   arr[] = [3, 4, 5, 6, 7, 1, 2]


#include <stdio.h>

int main()
{
	int arr[10],i,j,n,d,temp[10];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("The number of rotations: ");
	scanf("%d",&d);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+d];
	}
	
	for(i=n-d,j=0;i<n;i++,j++)
	{
		arr[i]=temp[j];
	}
	
	printf("After rotation: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}



//Reverse a string
//Check pallindrome
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
	char s[100],a[100];
	int i,n,j;
	
	printf("Enter the string: ");
	gets(s);
	n=strlen(s);
	
	//Case insensitive
	for(i=0;i<n;i++)
	{
		s[i]=tolower(s[i]);
	}
	
	
	
	for(i=n-1,j=0;s[i]!='\0';i--,j++)
	{
		a[j]=s[i];
	}
	a[n]='\0';
	
	printf("The reversed string is: %s\n",a);
	puts(a);

	if(strcmp(a,s)==0)
	{
		printf("String is pallindrome");
	}
	else
	{
		printf("Not a pallindrome");
	}
	
	
}




//Sort the string
//Check for anagram
//Merge two strings



#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
	sort(str.begin(), str.end());
	cout<<str;
	
	
}

int main()
{
	string s;
	cin>>s;
	sortString(s);
	
	
}


//To check for anagram, input the strings, sort the strings, if both the strings are equal, return true else return false
#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string str1, string str2)
{
	//Get lengths of both strings
	int n1=str1.length();
	int n2=str2.length();
	
	//If length is not same, they cannot be anagrams
	if(n1!=n2)
	{
		return false;
	}
	
	//Sort both the strings
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	//Compare sorted strings
	for(int i=0;i<n1;i++)
	{
		if(str1[i]!=str2[i])
		{
			return false;
		}
	}
	return true;
	
}



int main()
{
	string str1;
	string str2;
	cout<<"\nInput the strings: ";
	cin>>str1>>str2;
	if(areAnagram(str1,str2))
	{
		cout<<"Are anagrams";
	}
	else
	{
		cout<<"Not Anagrams";
	}
	
}




//Concatenate two strings without using strcat()
#include <stdio.h>

int main()
{
	char s1[100], s2[100];
	int length,j;
	printf("Enter the first string: ");
	gets(s1);
	
	printf("Enter the second string: ");
	gets(s2);
	
	length=strlen(s1);
	
	//Concatenate s2 to s1
	for(j=0;s2[j]!='\0';j++,length++)
	{
		s1[length]=s2[j];
	}
	
	s1[length]='\0';
	
	printf("After concatenation: ");
	puts(s1);
	
	
	
}





//Using maps to find duplicate character
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
	cin>>s;
	
	map<char, int> count;
	for(int i=0;i<s.length();i++)
	{
		count[s[i]]++;
	}
	
	for(auto it : count)
	{
		if(it.second > 1)
		{
			cout<<it.first<<", count = "<<it.second<<"\n";
		}
	}
	
	
}


//Using simple logic

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	cout<<"Duplicate characters are: "<<endl;
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]==s[j])
			{
				cout<<s[i]<<endl;
				break;
			}
		}
	}
}




#include <stdio.h>
int main()
{
	char s[100];
	int i;
	printf("Enter the string: ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	
	printf("%s\n",s);
	
	
	
}


//First repeating character

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[100];
	int i,j,p=-1;
	printf("Enter the string: ");
	scanf("%[^\n]s",s);
	
	for(i=0;i<strlen(s);i++)
	{
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[i]==s[j])
			{
				p=i;
				break;
			}
		}
		if(p!= -1)
		break;
	}
	
	if(p==-1)
	{
		printf("Not found");
	}
	else
	{
		printf("First repeating element: %c",s[p]);
	}
	
	
	
	
}



//First non-repeating character

//Frequency map- hashmap of character vs integer
//for ( i=0 to str.length())
//hash_map[str[i]]++;
//
//for(i=0 to str.length())
//  if(hash_map[str[i]]==1)
//  return str[i]
//  break 






#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main() {
    char str[100];
    int i,len,j;
    
    printf("Enter the string: ");
    scanf("%s",str);


    /* Declare hash */
    map<char,int> hash;
    len = strlen(str);
   
   /* Make key and value pair
      key denotes character
      value is the count of a character
   */
   for(i = 0; i < len; i++){

      hash[str[i]]++;
  
   }
  
  
    /* Check the count
      if count is 1 then print the element 
    */
   for(j=0;j<len;j++){
 
       if (hash[str[j]]==1){
          cout<<"First non-repeated character is "<<str[j];
          break;
       } 
   }

   return 0;
}



//Kth smallest element in a given array
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
	int arr[100],i,n,k;
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	printf("Enter the value of k: ");
	scanf("%d",&k);
	
	sort(arr,arr+n);
	cout<<arr[k-1]<<endl;
	
	
}







// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


void printUnion(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			cout << arr1[i++] << " ";

		else if (arr2[j] < arr1[i])
			cout << arr2[j++] << " ";

		else {
			cout << arr2[j++] << " ";
			i++;
		}
	}

	
	while (i < m)
		cout << arr1[i++] << " ";

	while (j < n)
		cout << arr2[j++] << " ";
}




void printIntersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else /* if arr1[i] == arr2[j] */
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
	}
}

int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	
	printUnion(arr1, arr2, m, n);
	cout<<endl;
	printIntersection(arr1, arr2, m, n);

	return 0;
}



// C++ implementation of simple method to find count of
// pairs with given sum.
#include <bits/stdc++.h>
using namespace std;


int getPairsCount(int arr[], int n, int sum)
{
	int count = 0; 

	
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				count++;

	return count;
}


int main()
{
	int arr[] = { 1, 5, 7, -1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;
	cout << "Count of pairs is "
		<< getPairsCount(arr, n, sum);
	return 0;
}



//Move all Negative Numbers to Beginning and Positive to End


//Set the j to 0.
//Traversing the array from 0 to n(exclusively, where n is array’s length).
//Check if any element of an array is less than the 0,
//Check if i should not be equal to j,
//Swap the values of indexes arr[i] and arr[j], and increase the value of j.
//Print the array.

#include<iostream>
using namespace std;
void shiftIntegers(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = { 2,4,-10,13,-7,-60,52,8,-19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    shiftIntegers(arr, n);
    return 0;
}





//Rearrange the array elements so that positive and negative numbers are placed alternatively.
//Number of positive and negative numbers need not be equal. If there are more positive numbers they appear at the end of the array. 
//If there are more negative numbers, they too appear in the end of the array.


//A C++ program to put positive numbers at even indexes and negative numbers at odd indexes


//Even numbers at even index and odd numbers at odd index in C++
//If there is an element at even index which is not even and an odd element which is not at odd index,
//we will swap them otherwise increase both indices by two.

#include <iostream>
using namespace std;

void shuffle(int arr[], int n) {
   
   int oIndex = 1;
   int eIndex = 0;
   
   for(int i = 0; i < n; ) {
     
      while (eIndex < n && arr[eIndex] % 2 == 0)
         eIndex += 2;
         
      while (oIndex < n && arr[oIndex] % 2 == 1)
         oIndex += 2;
         
      if (eIndex < n && oIndex < n)
         swap (arr[eIndex], arr[oIndex]);
         
      else
         break;
   }
}

int main()
{
   int arr[] = { 5, 1, 6, 4, 3, 8 };
   int n = sizeof(arr) / sizeof(arr[0]);

   cout << "Array before Reshuffling: ";
   for(int i = 0; i < n ; i++){
      cout<<arr[i]<<"\t";
   }
   shuffle(arr, n);

   cout<<"\nArray after Reshuffling: ";
   for(int i = 0; i < n ; i++){
      cout<<arr[i]<<"\t";
   };

   return 0;
}


//Digital coding questions
#include<bits/stdc++.h>
using namespace std;

int main () 
{

  int N;
  cin>>N;
  
  vector <int> Arr(N);
  
  for(int i=0; i<N; i++)
  cin>>Arr[i];
  
  
  vector<int> A1, A2;
  
  for(int i=0; i<N; i++)
  {
	if(Arr[i]%10==0)
      A2.push_back(Arr[i]);
    else 
	  A1.push_back(Arr[i]);
  }
  
  
  
  for(int i=0; i<A1.size(); i++)
  Arr[i]=A1[i];
  
  int k=A1.size();
  
  for(int i=0; i<A2.size(); i++)
  Arr[k++]=A2[i];
  
  for(int i=0; i<N; i++)
  cout<<Arr[i]<<" ";
  
  
  return 0;
} 







#include<bits/stdc++.h>
using namespace std;

int main () {

    int r1;
    cin >> r1;
int n;
    cin >> n;
    int r2;
    cin >> r2;
    int x;
    cin >> x;

    int total = 0;
    int hours = ceil(x * 1.0 / 60);

    if (n > hours) {
        total += (hours * r1);
    } else {
        total += n * r1;
        hours -= n;
        total += hours * r2;
    }
    cout << total;

    return 0;
}







#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string cstr;
    cin>>cstr;
    
    string res="";
    
    for(int i=0; i<cstr.size(); i++)
	{
        
        if( 'A'<=cstr[i] and cstr[i]<='Z')
       {   
         if(i!=0)
         res += " ";

         res += (cstr[i] + 32);
       }       
        
        else 
		  res += cstr[i];
        
      
    }
    
    cout<<res;
    
    return 0;
}










//Solution in C++:
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s, temp="";
    
    int res=0;
    
    cin>>s;
    
    for(int i=0; i<s.size(); i++)
    {
        if(isdigit(s[i]))
        temp += s[i];
        
        
        else{
            if(temp !="")
            { 
               res += stoi(temp);
			   temp = "";
            }
        }
    }
    
    if(temp !="")
    res += stoi(temp);
             
    cout<<res;
    
    return 0;
}




//Split strings using strtok() function


#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[100];
	cout<<"Enter a string: "<<endl;
	cin.getline(str,100);
	
	char *ptr;
	ptr=strtok(str," ");
	cout<<"Result: "<<endl;
	
	while(ptr!=NULL)
	{
		cout<<ptr<<endl;
		ptr=strtok(NULL," ");	
	}
}





//Reverse a sentence using stack
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
	stack<string> st;
	
	for(int i=0;i<s.length();i++)
	{
		string word="";
		while(s[i]!=' ' && i<s.length())
		{
			word+=s[i];
			i++;
		}
		st.push(word);
	}
	
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	
}





// C++ program to print all permutations 
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r)
{
	// Base case
	if (l == r)
		cout<<a<<endl;
	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}


int main()
{
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}



//Find the first repeated word in string.





//Define a string.
//Convert the string into lowercase to make the comparison insensitive.
//Split the string into words.
//Two loops will be used to find duplicate words. Outer loop will select a word and Initialize variable count to 1. Inner loop will compare the word selected by outer loop with rest of the words.
//If a match found, then increment the count by 1 and set the duplicates of word to '0' to avoid counting it again.
//After the inner loop, if count of a word is greater than 1 which signifies that the word has duplicates in the string.






////Split the string into words using built-in function  
//        String words[] = string.split(" ");  
//          
//        cout<<"Duplicate words in a given string : "; 
//        for(int i = 0; i < words.length; i++) {  
//            count = 1;  
//            for(int j = i+1; j < words.length; j++) {  
//                if(words[i].equals(words[j])) {  
//                    count++;  
//                    //Set words[j] to 0 to avoid printing visited word  
//                    words[j] = "0";  
//                }  
//            }  
//              
//            //Displays the duplicate word if count is greater than 1  
//            if(count > 1 && words[i] != "0")  
//                cout<<words[i];  
//        }  
//



//Anagram Search (Find the minimum number of characters to be deleted to make both the strings anagram.)

//Traverse both the input strings.
//Store the count of characters in string1 in array count1 and count of characters in string2 in array count2.
//Traverse count arrays, store number of characters to be removed in the result. (initialize result = 0 )
//For all characters add differences in the frequencies to result, result = result + abs(count1[i] – count2[i]).
//Return the final result.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int count1[26], count2[26];
    memset(count1,0,sizeof(count1));
    memset(count2,0,sizeof(count2));
    for (int i=0; i<s.length(); i++)
    {
        count1[s[i]-'a']++;
    }
    for (int i=0; i<t.length(); i++)
    {
        count2[t[i]-'a']++;
    }
    int ans=0;
    for(int i=0;i<26; i++)
    {
        ans+=abs(count1[i]-count2[i]);
    }
    cout<<ans<<endl;
    return 0;
}







