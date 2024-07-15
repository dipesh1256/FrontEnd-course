#include<stdio.h>

//This is a Calculate Area of Rectangle program

int main () {

  float  lanth,hight,area;

  printf("Enter the Lanth : ");
  scanf("%f",&lanth);

  printf("Enter the Hight :");
  scanf("%f",&hight);

  area =lanth*hight;

  printf("The Area of Rectangle : %f",area);

  return 0;
}
