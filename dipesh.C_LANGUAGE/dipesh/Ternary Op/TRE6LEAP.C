#include<stdio.h>
#include<conio.h>

int main () {

   int a,b,c;


   clrscr();

   printf("Enter the Year : ");
   scanf("%d",&a);

   (a%4==0)?printf("This is leap year "):printf("This  Isn't  leap year");

 return  0;

}