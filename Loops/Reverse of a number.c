/* Program to find the reverse of a number. */

#include<stdio.h>
int main()
{
    int num,rev=0, rem;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
      rem=num%10;
      rev=rev*10+rem;
      num/=10;
    }
    printf("reverse number is: %d",rev);
}

