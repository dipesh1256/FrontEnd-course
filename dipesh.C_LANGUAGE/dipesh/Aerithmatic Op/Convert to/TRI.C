#include<stdio.h>

// This is calculate area of Triangle

int main () {

 float b,h,area;

   printf("Enter the value Bottom of Triangle : ");
   scanf("%f",&b);

   printf("Enter the value High of Triangle : ");
   scanf("%f",&h);

   area=0.5*b*h;

   printf("The area of Triangle is  : %.2f",area);

 return 0;

}