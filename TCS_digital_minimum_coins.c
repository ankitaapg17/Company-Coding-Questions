//Minimum number of coin problem

#include <stdio.h>
#include <conio.h>

int main()
{
	int i,number;
	printf("Enter the number: ");
	scanf("%d",&number);
	
	int one=0,two=0;
	int five= (number-4)/5;
	
	if(((number-5*five)%2)==0)
	{
		one=2;
	}
	else
	{
		one=1;
	}
	two=(number-5*five-one)/2;
	
	printf("%d",one+two+five);
	printf("%d",one);
	printf("%d",two);
	printf("%d",five);
	
	
}












