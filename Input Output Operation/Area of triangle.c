/*Program to calculate and print the area of triangle, where the three sides of the triangle is given as input.*/
#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("enter sides of triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2.0;  //s is the semi-perimeter
    //printf("%f",s);
    area=(sqrt)(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle:%f",area);
}
