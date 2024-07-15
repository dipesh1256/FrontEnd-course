#include<stdio.h>
#include<conio.h>

int main()
{
  float bill;
  int unit;
  clrscr();

 printf("enter your reading bill units :");
 scanf("%d",&unit);

 bill=(unit<100)?unit*0.60:(unit<100 && unit>=300)?(60+(unit-100)*0.80):(unit>300)?(220+(unit-300)*0.90):-1203;

 bill=bill<50?50:bill;
 bill=bill>300?bill+bill*0.15:bill;

 printf("your bill into amount as per reading your units : %0.2f",bill);

 return 0;
 }