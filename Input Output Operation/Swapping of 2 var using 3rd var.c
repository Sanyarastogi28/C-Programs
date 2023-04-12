
/*Program that swaps values of two variables using a third variable.*/

#include <stdio.h>
int main()
{
  int x,y,temp;     /*temp is a variable with short lifetime*/
  printf("enter first variable: ");
  scanf("%d",&x);
  printf("enter the second variable: ");
  scanf("%d",&y);
  temp=x;
  x=y;
  y=temp;
  printf("\nprint after swapping first variable: %d", x);
  printf("\nprint after swapping second variable: %d", y);
}
