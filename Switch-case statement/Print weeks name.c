/*User is going to enter a value from 1 to 7. day of the week should be displayed accordingly like 1 – Monday, 2 – Tuesday etc. Write a program for the same.*/
#include <stdio.h>

int main()
{
  int val;
  printf("Enter the value from 1-7: ");
  scanf("%d",&val);
  switch(val)
  {
      case 1:
      printf("Monday");
      break;
      case 2:
      printf("Tuesday");
      break;
      case 3:
      printf("Wednesday");
      break;
      case 4:
      printf("Thursday");
      break;
      case 5:
      printf("Friday");
      break;
      case 6:
      printf("Saturday");
      break;
      case 7:
      printf("Sunday");
      break;
      default:
      printf("invalid input");
  }
}
