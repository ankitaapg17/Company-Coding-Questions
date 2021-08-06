//There is a range given n and m in which we have to find the count of all the prime pairs whose difference is 6. We have to find how many sets are there within a given range.

//Output:
//The output consists of a single line, print the count prime pairs in a given range. Else print"No Prime Pairs".
//
//Sample Input:
//
//4
//30
//
//Output:
//6
//
//Explanation:
//(5, 11) (7, 13) (11, 17) (13, 19) (17, 23) (23, 29) . we have 6 prime pairs.
//Sexy Prime Pair

//Check whether both the element in pairs are Prime Numbers and they differ by 6,
//then the current pairs form SPP (Sexy Prime Pair).


#include <stdio.h>
#include <conio.h>
#include <math.h>

int checkprime(int num)
{
	int i,j,s=0;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			s=s+1;
		}
		
	}
	return s;
		
}

int main()
{
	int i,j,n,ur,lr;
	int k,p;
	int count=0;
	printf("Enter the upper range: ");
	scanf("%d",&ur);
	printf("Enter the lower range: ");
	scanf("%d",&lr);
	for(i=lr;i+6<=ur;i++)
	{
		//Check if i and other number is prime and diff is 6
		if(checkprime(i)==0 && checkprime(i+6)==0)
		{
			count++;
			printf("%d, %d",i,i+6);
			printf("\n");
		}
			
	
		
		
	}
	
	printf("%d",count);
}







