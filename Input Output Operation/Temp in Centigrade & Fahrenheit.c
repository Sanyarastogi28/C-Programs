/*	Program that accepts temperature in Centigrade and converts into Fahrenheit using the formula C/5 = (F-32)/9.*/
#include <stdio.h>

int main()
{
   float  Centigrade,Fahrenheit;
   printf("Enter the temperature in Centigrade: ");
   scanf("%f",&Centigrade);
   Fahrenheit=((Centigrade*9)/5)+32;
   printf("temperaturein Fahrenheit: %f",Fahrenheit);
}
