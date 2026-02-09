#include<stdio.h>
int main()
{   
    float r,a,c;
    printf("Enter value of radius","%f");
    scanf("%f", &r);
    a=3.14*r*r;
    printf("Area of the circle= %f",a);
    c=2*3.14*r;
    printf("\nCicumference of the circle= %f",c);
    return 0;
}