//Write a program in C to display the table of a number and print the sum of all the multiples in it.

#include <stdio.h>
int main()
{
    int n, i, value=0, sum=0;
                
    printf("Enter number : ",n);
    scanf("%d",&n);
        
    for(i=1; i<=10; ++i)
    {
        value = n * i;
        printf("%d \t",value);
        sum=sum+value;
    }
           
    printf("\nsum : %d",sum);
                
    return 0;
}
