#include<stdio.h>
#include<conio.h>

int main (){

 int a;

  clrscr();

  printf("Enter the number :");
  scanf("%d",&a);

  if(a%2==0){
  printf("its Divisibale by 2");
  }
  else if (a%3==0){
  printf("its Divisible by 3\n");
  }
  else if (a%4==0){
  printf("its Divisible by 4\n");
  }
  else if (a%5==0){
  printf("its Divisible by 5\n");
  }
  else if (a%6==0){
  printf("its Divisible by 6\n");
  }
  else if (a%7==0){
  printf("its Divisible by 7\n");
  }
  else if (a%8==0){
  printf("its Divisible by 8\n");
  }
  else if (a%9==0){
  printf("its Divisible by 9\n");
  }
  else if (a%10==0){
  printf("its Divisible by 10\n");
  }
  else
  {
    printf("its Not Divisoble in to 2 to 10 \n");  
  }
  
 return 0;

}