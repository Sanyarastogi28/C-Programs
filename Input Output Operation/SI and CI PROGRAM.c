/*	Program to calculate the simple interest and compound interest (The Principal, Amount, Rate of Interest and Time are entered through keyboard).*/

#include<stdio.h>
int main()
{
    float principal, amount, roi,si,ci;
    int Time;
    printf("enter principal: ");
    scanf("%f",&principal);
    printf("enter amount: ");
    scanf("%f",&amount);
    printf("enter rate of interest: ");
    scanf("%f",&roi);
    printf("enter Time: ");
    scanf("%d",&Time);
    si=(principal*roi*Time)/100;
    printf("simple interest: %f",si);
    ci=amount-principal;
    printf("\nthe compound interest is: %f",ci);
}