//Jaya invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of Programmer (the 256thday of
// the year) during a year in the inclusive range from 1700 to 2700. 
//From 1700 to 1917 

//February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years.
//In the Julian calendar, leap years are divisible by 4 ; in the Gregorian calendar, leap years are either of the following:
//
//Divisible by 400
//Divisible by 4 and not divisible by 100
//Given a year, y, find the date of the 256th day of that year according to the official Russian calendar during that year.
//Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.
//
//For example, the given year is 1984.1984 is divisible by 4, so it is a leap year. 
//The 256 day of a leap year after 1918 is September 12, so the answer is 12.9.1984. 

//Sample Input
//2017
//
//Sample Output
//13.09.2017
           
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year>=1700 && year<=1917)
    {
       if(year%4==0)
       {
           printf("12.09.%d",year);
       }
       else
       {
           printf("13.09.%d",year);
       }
    }
    else if(year==1918)
    {
        printf("26.09.%d",year);
    }
    else
    {
        if((year%400==0)||((year%4==0)&&(year%100!=0)))
        {
            printf("12.09.%d",year);
        }
        else
        {
            printf("13.09.%d",year);
        }       
    }
   return 0; 
}         









