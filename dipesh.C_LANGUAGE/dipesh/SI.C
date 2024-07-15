#include<stdio.h>

//this is calculate of simple intrest

int main()
{

float rs,rate,si,time;

printf("enter the value of amount :");
scanf("%f",&rs);

printf("enter the interes rate :");
scanf("%f",&rate);

printf("enter the time in or year :");
scanf("%f",&time);

si=(rs*rate*time)/100;

printf("your simple imerest rate is :%2.f",si);

return 0;
}