#include<stdio.h>
#include<conio.h>

int main () {

   int a;


   clrscr();

   printf("Enter the Number : ");
   scanf("%d",&a);

   (a%5==0)&&(a%3==0)?printf("It's  Divisible by 5 or 3"):printf("It's Not Divisible by 5 or 3 ");

 return  0;

}