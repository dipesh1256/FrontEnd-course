#include<stdio.h>

//this is a calculate area of circle program

  int main()
  {
  float pie=3.14,cir,rad;

  printf("enter the value of radius :");
  scanf("%f",&rad);

  cir=pie*rad*rad;

  printf("the value of circle : %f",cir);

  return 0;

  }