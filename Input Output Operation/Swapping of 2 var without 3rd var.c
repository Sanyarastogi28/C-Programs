/*Program that swaps the values of two variables without using a 3rd variable*/

#include <stdio.h>

int main()
{
  int a,b; //a=20, b=50
  printf("enter first variable: ");
  scanf("%d",&a);
  printf("enter second variable: ");
  scanf("%d",&b);
  a=a+b;  //a=20+50=70
  b=a-b;  //b=70-50=20
  a=a-b; //a=70-20=50
  printf("\n enter first variable after swapping: %d", a);
  printf("\n enter second variable after swapping: %d", b);
}
