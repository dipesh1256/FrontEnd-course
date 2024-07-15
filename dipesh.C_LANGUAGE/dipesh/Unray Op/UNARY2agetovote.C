#include<stdio.h>
#include<conio.h>

int main () {

  int age;
  clrscr();

  printf("Enter Your Age To check You Eligible For Vote :");
  scanf("%d",&age);

  (age<18)?printf("Can't vote "):printf("Can  Vote");



 return 0;

}