//You have to find the security key from the data transmitted.
//
//Input:
//The input consists of an integer data, representing the data to be transmitted.
//
//Output:
//Print an integer representing the security key for the given data.
//
//Example:
//
//Input:
//578378923
//
//Output:
//783
//
//Explanation:
//The repeated digits in the data are 7, 8 and 3. So, the security key is 783


#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    int i, j, len, count=0;

    scanf("%s",a);
    len = strlen(a);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                printf("%c",a[i]);
                break;
            }
        }
    }
    return 0;
}








