/* Program to print sum of even and odd numbers from 1 to N numbers.*/

#include <stdio.h>
int main ()
{
  int i, N, sum1 = 0, sum2 = 0;
  printf ("enter the number: ");
  scanf ("%d", &N);
  for (i = 0; i <= N; i++)
    {
      if (i % 2 == 0)
	{
	  sum1 = i + sum1;

	}
      else
	{
	  sum2 = i + sum2;

	}
    }
  printf ("sum of even numbers is: %d", sum1);
  printf ("\nsum of odd numbers: %d", sum2);

}
