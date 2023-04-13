/*	Write a program to display the color name according to the code entered. The coding scheme is as follows 
 1: “RED”
 2: “GREEN”
 3: “WHITE”
 4: “YELLOW”
 5: “ORANGE” */
#include <stdio.h>
int main()
{
 int code;
 printf("enter the code: ");
 scanf("%d",&code);
 switch(code)
 {
     case 1:
     printf("red");
     break;
     case 2:
     printf("green");
     break;
     case 3:
     printf("white");
     break;
     case 4:
     printf("yellow");
     break;
     case 5:
     printf("orange");
     break;
     default:
     printf("invalid");
 }
} 
