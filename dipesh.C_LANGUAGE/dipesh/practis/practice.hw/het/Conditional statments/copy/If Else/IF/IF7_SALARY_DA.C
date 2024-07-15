#include<stdio.h>
#include<conio.h>

int main (){

 float amt,sma,da,sal;

 clrscr();

  printf("Enter your Salary:");
  scanf("%f",&sal);

  if(sal<=5000){
  amt=((sal*0.08)+(sal*0.2)+sal);
  //printf("hdasf");
  }
  if(sal>5000 && sal<=10000){
  amt=((sal*0.12)+(sal*0.3)+sal);
  }

  if(sal>10000 && sal<=15000){
  amt=((sal*0.15)+(sal*0.4)+sal);
  }

  if(sal>15000){
  amt=((sal*0.2)+(sal*0.5)+sal);
  }

  printf("Your salary amount is : %0.2f",amt);

return 0;
}