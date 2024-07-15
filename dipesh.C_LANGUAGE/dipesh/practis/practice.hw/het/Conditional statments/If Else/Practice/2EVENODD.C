#include<stdio.h>
#include<conio.h>

 int main (){

     int a;

     clrscr();

     printf("Enter the number to check a even or odd number:");
     scanf("%d",&a);

     if(a%2==0){
     printf("This is even number");
     }else{
     printf("This is odd number");
     }

 return 0;
 }