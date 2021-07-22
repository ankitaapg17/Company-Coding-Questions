//Print the sum of fibonacci series nth term.  
//Series : 0, 1, 1, 2, 3, 5, 8, 13 
//
//Input:
//8
//
//Output: 
//33

#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,i=2,sum=1;
    printf("n : ");
    scanf("%d",&n);
    while(i<n)
    {
        c=a+b;
        a=b;
        b=c;
        sum=sum+c;
        i++;
    }
    printf("%d",sum);
    return 0;
}

