#include <stdio.h>

//This is Calculate of simple interest

int main()
{
  float rs,rate,si,time;

  printf("Enter the Value of Ammount : ");
  scanf("%f",&rs);

  printf("Enter the Interes Rate : ");
  scanf("%f",&rate);

  printf("Enter the Time in or Year: ");
  scanf("%f",&time);

  si=(rs*rate*time)/100;

  printf("Your Simple Imterest Rate is  : %2.f",si);

  return 0;
}