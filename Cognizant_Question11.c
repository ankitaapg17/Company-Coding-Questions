//Find greatest among three numbers

#include <stdio.h> 
  
int main() 
{ 
    int a, b, c, max_num; 
    printf("Enter the three numbers\n");
    printf("First: ");
    scanf("%d",&a);  
    printf("Second: ");
    scanf("%d",&b);  
    printf("Third: ");
    scanf("%d",&c);  
    max_num = (a > b) ? (a > c ? a : c) : (b > c ? b : c); 
      
   
    printf("Largest number among %d, %d and %d is %d.", a, b, c, max_num); 
  
    return 0; 
}
