/* Program to find the factorial of a given number. */

#include <stdio.h>
int main()
{
 int i,num;
 long fact=1;
 printf("enter the number: ");
 scanf("%d",&num);
 if(num<0)
 {
     printf("error");
}
else{
 for(i=1;i<=num;++i)
     {
         fact=fact*i;
     }
         printf("Factorial: %ld",fact);
         return 0;
     }}


