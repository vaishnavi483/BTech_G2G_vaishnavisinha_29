#include<stdio.h>
int main
{
    printf("Enter a number"%f);
    scanf("%f",&x);
    if(x>0)
    {
        printf("The number is positive");
    }
    else if(x<0)
    {
        print("The number is negative");
    }
    else if(x==0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("The number is imaginary");
    }
}