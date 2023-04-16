/* Program to print the Fibonacci series. 
(0,1,1,2,3,5,8,13,...)*/

#include<stdio.h>
int main()
{
    int i, n, t1=0, t2=1, next_item;
    printf("enter the no:");
    scanf("%d",&n);
    printf("fibonacci series is: ");
    for(i=1;i<=n;++i)
    {
        
        printf("%d,",next_item);
        t1=t2;
        t2=next_item;
        next_item=t1+t2;
    }
    
}  
 

