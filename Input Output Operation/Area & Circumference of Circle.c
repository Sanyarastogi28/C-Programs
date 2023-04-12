/*	Program to calculate the area and circumference of a circle.*/

#include <stdio.h>
int main()
{
    float radius, area,circumference;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area=3.14* radius*radius;
    printf("Area of circle is: %f",area);
    circumference=2*3.14*radius;
    printf("\nCircumference of circle is:  %f", circumference);
    
}