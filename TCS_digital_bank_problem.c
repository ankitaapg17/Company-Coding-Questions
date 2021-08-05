//Example 1
//Input
//10000
//20
//3
//5 9.5
//10 9.6
//5 8.5
//3
//10 6.9
//5 8.5
//5 7.9
//Output: Bank B



#include <stdio.h>
#include <math.h>
int main ()
{
  double p, s, mi, sum, emi, bank[5], sq;
  int y, n, k, i, yrs, l = 0;
  scanf ("%lf", &p);
  scanf ("%d", &y);
  for (k = 0; k < 2; k++)
    {
      scanf ("%d", &n);
      sum = 0;
      for (i = 0; i < n; i++)
	{
	  scanf ("%d", &yrs);
	  scanf ("%lf", &s);
	  mi = 0;
	  sq = pow ((1 + s), yrs * 12);
	  emi = (p * (s)) / (1 - 1 / sq);
	  sum = sum + emi;
	}
      bank[l++] = sum;

    }

  if (bank[0] < bank[1])

    printf ("Bank A");

  else

    printf ("Bank B");

  return 0;

}
