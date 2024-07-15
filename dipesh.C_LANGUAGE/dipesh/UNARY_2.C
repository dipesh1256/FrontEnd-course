#incl ude<stdio.h>
#include<conio.h>

int main()
{
 int age;
 clrscr();

 printf("enter your age to check you eligbile for vote :");
 scanf("%d",&age);

 age>=18?printf("can vote "):printf("can't vote ");

 return 0;
 }