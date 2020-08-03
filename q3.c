// Program to print all distinct elements of given input arrays. Also print the total of the distinct elements.

#include <stdio.h>
int Not_common (int *arr1, int *arr2, int l1, int l2)
{
  int count = 0, flag1, i, j;
  for (i = 0; i < l1; i++)
    {
      flag1 = 0;
      for (j = 0; j < l2; j++)
	{
	  if (arr1[i] == arr2[j])
	    {
	      flag1 = 1;
	      break;
	    }
	}
      if (flag1 == 0)
	{
	  count++;
	  printf ("%d,", arr1[i]);
	}
    }
  for (i = 0; i < l2; i++)
    {
      flag1 = 0;
      for (j = 0; j < l1; j++)
	{
	  if (arr2[i] == arr1[j])
	    {
	      flag1 = 1;
	      break;
	    }
	}
      if (flag1 == 0)
	{
	  count++;
	  printf ("%d,", arr2[i]);
	}
    }
  return count;
}

int main ()
{
  int len1 = 3, len2 = 3, result, i, j;
  int arr1[10], arr2[10];
  scanf ("%d %d", &len1, &len2);
  for (i = 0; i < len1; i++)
    scanf ("%d", &arr1[i]);
  for (i = 0; i < len2; i++)
    scanf ("%d", &arr2[i]);
  result = Not_common (arr1, arr2, len1, len2);
  printf ("\n %d", result);
  return 0;
}
