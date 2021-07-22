//Check whether the below program print the below pattern
//
//Input:
//enter number of rows : 4

//Output:
//
//1
//22
//333
//4444
//4444
//333
//22
//1

#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",i);
        }
         printf("\n");
    }
    for(i=n;i>=1;i=i-1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}










