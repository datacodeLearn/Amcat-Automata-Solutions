// Find the number of all possible triplets in the array that can form the triangle (condition is a + b > c).

#include "stdio.h"
int arr[100], n, n1, n2, i, j, k;
int a, b, c;
int main ()
{
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    scanf ("%d", &arr[i]);
  for (i = 0; i < n - 2; i++)
    {
      a = arr[i];
      for (j = i + 1; j < n - 1; j++)
	{
	  b = arr[j];
	  for (k = j + 1; k < n; k++)
	    {
	      c = arr[k];
	      if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
		{
		  printf ("%d %d %d", a, b, c);
		  printf ("Yes");
		}
	      else
		{
		  printf ("%d %d %d", a, b, c);
		  printf ("Non");
		}
	    }
	}
    }
  return 0;
}
