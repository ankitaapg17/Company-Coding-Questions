//Program to count common subsequence in two strings

#include <stdio.h>
#include <string.h>

//Function to count the number of subsequences in the string.
int countsequences(char str[], char str2[])
{
   int n1 = strlen(str);
   int n2 = strlen(str2);
   int cnt[n1+1][n2+1];
   for (int i = 0; i <= n1; i++)
   {
      for (int j = 0; j <= n2; j++)
      {
        cnt[i][j] = 0;
      }
   }
   //Taking each character from first string.
   for (int i = 1; i <= n1; i++)
   {
      //Taking each character from second string.
      for (int j = 1; j <= n2; j++)
      {
         //If characters are same in both the string.
         
         if(str[i-1] == str2[j-1])
         {
            cnt[i][j] = 1 + cnt[i][j-1] + cnt[i-1][j];
         }
         else
         {
            cnt[i][j] = cnt[i][j-1] + cnt[i-1][j] - cnt[i-1][j-1];
         }
      }
   }
   return cnt[n1][n2];
}
//Main function for printing the result.
int main()
{
    char str[100] ,str2[100];
    printf("Enter the first string: ");
    gets(str);
    printf("Enter string second: ");
    gets(str2);
    printf("Number of common subsequence is: %d ",countsequences(str, str2));
    return 0;
}
