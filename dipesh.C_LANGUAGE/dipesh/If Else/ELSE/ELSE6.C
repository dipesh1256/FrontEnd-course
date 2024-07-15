#include<stdio.h>
#include<conio.h>

int main () {

  int pass,marks,fall;

  clrscr();

  printf("Enter your marks:");
  scanf("%d",&marks);

  if(marks>=33){
  printf("Pass");
  }
  else{
  printf("Fail");
  }

 return 0;
}