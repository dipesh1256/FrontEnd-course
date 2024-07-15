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

  if(a<b){
  printf("A is smallest\n");
  }else if(b<c){
        printf("B is smallest\n");  
  }else{
        printf("C is samallest\n");
  }
  
 return 0;

}