#include<stdio.h>
#include<conio.h>

int main () {

   int a;
   float amt,sal;

   clrscr();

   printf("Enter Your Salary to calculate Gross of SMA or DA :");
   scanf("%f",&sal);

   amt=(sal <=5000)?(sal*0.08)+(sal*0.2)+sal:(sal >5000 && sal<=10000)?(sal*0.12)+(sal*0.2)+sal:(sal>10000 && sal<=15000)?(sal*0.15)+(sal*0.4):(sal>15000)?(sal*0.2)+(sal*0.5)+sal:-1546;

   printf("The Salary with SMA and DA : %0.2f",amt);


 return 0;

}