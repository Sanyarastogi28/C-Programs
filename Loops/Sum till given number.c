/*Program to print the sum of all numbers up to a given number.*/

#include <stdio.h>

int main()
{
  int i,num, sum=0;
  printf("Enter number: ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
      sum =sum+i;
  }
  printf("sum is: %d", sum);
}
