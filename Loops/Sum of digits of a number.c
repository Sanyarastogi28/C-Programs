/* Program to find the sum of digits of the entered number. */

#include<stdio.h>  //1225
int main()
{
    int num , sum=0,rem;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("sum of digits of number is: %d",sum);
}