#include<stdio.h>
#include<conio.h>

int main (){

 float amt,sma,da,sal;

 clrscr();

  printf("Enter your Salary:");
  scanf("%f",&sal);

  if(sal>=0 && sal<=2500){
  amt=sal;
  }

  if(sal>2500 && sal<=5000){
  amt=(sal*0.10);
  }
  if(sal>5000 && sal<=10000){
  amt=(sal*0.20);
  }

  if(sal>=10000){
  amt=(sal*0.30);
  }

  printf("Your salary amount is : %0.2f",amt);

return 0;
}