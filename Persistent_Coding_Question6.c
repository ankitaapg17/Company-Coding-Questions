//The function printPattern(int  num)? prints elements of an pre inputted array based on the value of input argument num?
// ?(num>=? 0). If the input number num? is even, the function is expected to print all the even numbers upto num of the array, and in case it’s odd,
//is expected to print all the odd numbers upto num of the array.
 
 
#include <stdio.h>
int main()
{
   int i,num;
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   scanf("%d",&num);
   if(num%2==0)
   {
   	    for(i=0;i<num;i++)
   	    
   	    {
   		    if(arr[i]%2==0)
   		    {
   		  	    printf("%d",arr[i]);
			 }
   		
   		
	   }
   }
   	else
   	{
   		for(i=0;i<num;i++)
   		{
   			if(arr[i]%2!=0)
   			{
   				printf("%d",arr[i]);
			   }
		   }
   		
	   }
   	
   	
   }
	
	


 
 
 
 
 
 

