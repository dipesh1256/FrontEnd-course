#include<stdio.h>
#include<conio.h>

int main (){

 float amt,sal;

  clrscr();

  printf("Enter your Salary:");
  scanf("%f",&sal);

  if (sal<=2500)
  {
  amt=sal;
  } 
  else if (sal<=5000)
  {
  amt=(sal*0.10);
  }
  else if (sal<=10000)
  {
  amt=(sal*0.20);
  }else
  {
  amt=(sal*0.30);
  }

  printf("Your salary amount is : %0.2f",amt);

return 0;
}