//The? function patternPrint(int? num) ?prints even or odd numbers based on the values of the input arguments num(num >= 0).
//
//If the input number num is even, the function is expected to print the even whole numbers upto num and in case it is odd,
//is expected to print the odd numbers upto num(inclusively).

void printPattern (int num) 
{
    int i, print = 0;
    if (num % 2 == 0)
    {
        print = 0;
        for (i = 0; print <= num; i++)
    	{
            printf ("%d ", print);
            print += 2;
        }
    }
    else
    {
        print = 1;
        for (i = 0; print <= num; i++)
    	{
            printf ("%d ", print);
            print += 2;
        }
    }
}







