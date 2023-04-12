/*Program to find the greatest of three numbers.*/

#include <stdio.h>

int main()
{
   float a,b,c;
   printf("Enter the three numbers: ");
   scanf("%f%f%f",&a,&b,&c);
    if(a>=b && b>=c)
    
       printf("a is greatest",a) ;
    
    else if(b>=a && b>=c)
    
        printf("b is the greatest");
    
    else
    
        printf("c is the greatest");
    
}

