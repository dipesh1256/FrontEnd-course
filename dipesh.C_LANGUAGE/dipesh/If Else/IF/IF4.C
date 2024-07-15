#include<stdio.h>
#include<conio.h>

int main (){

 int a;

  clrscr();

  printf("Enter the number :");
  scanf("%d",&a);

  if(a%5==0 && a%3==0){
  printf("its Divisibale");
  }

  if(a%5!=0 && a%3!
  =0){
  printf("its Notdivisoble\n");
  }
 return 0;

}