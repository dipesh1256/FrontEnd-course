#include<stdio.h>
#include<conio.h>

int main () {

  int year;

  clrscr();

  printf("Enter Year To check for leap year or bin leap year:");
  scanf("%d",&year);

  if(year %4!=0){
  printf("it's Bin leap Year");
  }
  else{
  printf("it's Leap Year");
  }

 return 0;
}
