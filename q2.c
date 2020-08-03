//Print all the prime numbers which are below the given number separated by comma.

#include"stdio.h"
int main ()
{
  int n, i, j, ct = 0;
  scanf ("%d", &n);
  for (i = 2; i <= n; i++)
    {
      ct = 0;
      for (j = 2; j < i; j++)
	{
	  if (i % j == 0)
	    {
	      ct = 1;
	      break;
	    }
	}
      if (ct == 0)
	{
	  if (i > 2)
	    printf (",");
	  printf ("%d", i);
	}
    }
  return 0;
}
