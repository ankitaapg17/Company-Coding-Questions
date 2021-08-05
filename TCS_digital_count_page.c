//Use long long for storing the numbers from the string.

//You need to find only those numbers which do not contain 9.
//For eg, if the string contains "hello this is alpha 5051 and 9475".You will extract 5051 and not 9475.
//You need only those numbers which are consecutive and you need to help him find the numbers. Print the largest number.


//Complete the countpage function in the editor below. It should return the minimum number of pages Hobo must turn.
//
//countpage has the following parameter(s):
//
//n: the number of pages in the book
//p: the page number to turn to
//
//Sample Input 
//
//      6
//      2
//
//Sample Output 
//
//      1
//      
//      
#include <stdio.h>
int main()
{
    int n, p, min;
    scanf("%d",&n);
    scanf("%d",&p);
    min = (n/2)-(p/2);
    if(min>p/2)
    {
        min = p/2;
    }
    printf("%d",min);
    return 0;
}      






