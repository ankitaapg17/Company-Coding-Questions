//Automata fix



#include <stdio.h>
int main(void)
{
    printf("Welcome to \"prepinsta\"");
    return 0;
}
// Welcome to "prepinsta"


/************************/
void palindrome(int number)
{
    int rev = 0,store, n1,left;
    n1=number;
    store= number;
    while (number > 0)
      {
        left= number%10;   //these are the correct lines
        rev = rev * 10 + left; //these are the correct lines
        number=number/10;  //these are the correct lines
       }
    if(n1==rev)
        printf("Number %d is Palindrome number",n1);
    else
        printf("it is not a Palindrome number");
}

// If the entered array is arr{1,2,3,4,5}, and the entered value is 2, then the output will be 2+4 = 6.

int sumOfValue(int len, int* arr, int value)
{
    int sum = 0;
    for(int i =0 ; i < len; i++   )
    {
        if(arr[i]%value == 0) 
            sum += arr[i];   //these are the correct lines

    }
    return sum;
}




// If the entered array is arr{1,2,3,4,5}, and the entered value is 2, then the output will be, item found at location 2.
// And if the entered value is 6, then the output will be item not found.

int Search(int a[], int start, int last, int item)
{
  int mid;
  if(last >= start)
  {
    mid = (start + last)/2;
    if(a[mid] == item){
       return mid+1;
    }
    else if(a[mid] < item){
       return Search(a,mid+1,last,item);  //these are the correct lines
    }
    else{
       return Search(a,start,mid-1,item);  //these are the correct lines
    }
  }
  return -1;
}


//Binary to decimal

#include <stdio.h>
int main()
{
      int  num, binary_val, decimal_val = 0, base = 1, rem;
      printf("Insert a binary num (1s and 0s) \n");
      scanf("%d", &num); 
      binary_val = num;
      while (num > 0)
      {
          rem = num % 10;
          decimal_val = decimal_val + rem * base;
          num = num / 10 ;  //these are the correct lines
          base = base * 2;  //these are the correct lines
      }
      printf("%d \n", binary_val);
      printf("%d \n", decimal_val);
   return 0;
}



//







