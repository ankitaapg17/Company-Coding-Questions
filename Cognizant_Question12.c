//Print the prime numbers from an array up to given value n by using existing function.

#include <stdio.h>
#include <conio.h>



int isprime(int num)
{ 
  int i;
  int isprime = 1;
  for(i = 2;  i <= num / 2; i++) 
  {      
       if(num % i == 0)      
       {            
           isprime = 0;      
           break;    
       }
   }   
   return isprime;
 }
 
 int main()
{
    int n, m, arr[100], size=0, i;
    scanf("%d", &n);
    for(m = 2; m <= n; m++)
    {
        if(isprime(m))
        {
            arr[size++]= m;
        }
    }
    for(i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
