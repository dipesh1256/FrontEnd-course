#include<stdio.h>

//this is calculate area of triangle

int main()
{
float b,h,area;

printf("enter the value bottom of triangle :");
scanf("%f",&b);

printf("enter the value high of triangle :");
scanf("%f",&h);

area=0.5*b*h;

printf("the area of triangle is : %2.f",area);

return 0;
}