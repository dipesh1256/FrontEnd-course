#include<stdio.h>
#include<conio.h>

int main (){

 int a,b,c;

  clrscr();

  printf("Enter the Number of A :");
  scanf("%d",&a);

  printf("Enter the number of B:");
  scanf("%d",&b);

  printf("Enter the number of C :");
  scanf("%d",&c);

  if(a<b && a<c){
  printf("A is smallest\n");
  }

  if(b<c && b<a){
  printf("B is smallest\n");
  }

  if(c<a && c<b){
  printf("C is samallest\n");
  }
 return 0;

}