//Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

// C Program to check the given string is a pangram or not
#include<stdio.h>
int main()
{
    char str[120];
    int i,alphabet[26]={0},result=0;
     
    printf("Enter the String: ");
    scanf("%s",str);
     
    for(i=0;str[i]!='\0';i++)
    {
        if('a'<=str[i] && str[i]<='z')
        {
            result+=!alphabet[str[i]-'a'];
            alphabet[str[i]-'a']=1;
        }
        else if('A'<=str[i] && str[i]<='Z')
        {
            result+=!alphabet[str[i]-'A'];
            alphabet[str[i]-'A']=1;
        }
    }
     
    if(result==26)
    {
        printf("The String is a Pangram");
    }
    else
    {
        printf("The String is not a Pangram");
    }
    return 0;
}
