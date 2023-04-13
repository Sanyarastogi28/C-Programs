/*User is going to enter a value from 1 to 12. Month name should be displayed accordingly like 1 – January, 2 – February etc. Write a program for the same.*/
#include <stdio.h>

int main()
{
  int val;
  printf("Enter the value from 1-12: ");
  scanf("%d",&val);
  switch(val)
  {
      case 1:
      printf("January");
      break;
      case 2:
      printf("February");
      break;
      case 3:
      printf("March");
      break;
      case 4:
      printf("April");
      break;
      case 5:
      printf("May");
      break;
      case 6:
      printf("June");
      break;
      case 7:
      printf("July");
      break;
      case 8:
      printf("August");
      break;
      case 9:
      printf("September");
      break;
      case 10:
      printf("October");
      break;
      case 11:
      printf("November");
      break;
      case 12:
      printf("December");
      break;
      default:
      printf("invalid input");
  }
}
