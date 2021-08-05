//If input is 2, output will be

//00006
//00028 00066
//If input is 3, output will be
//
//00006
//00028 00066
//00120 00190 00276

#include<stdio.h>
int main ()
{
  int n, a = 0, b = 3, i, re, j;
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  a = a + 2;
	  if (i == 1)
	    b = 3;
	  else
	    b = b + 4;
	  re = a * b;
	  printf ("%.5d ", re);
	}
      printf ("\n");
    }
  return 0;
}



