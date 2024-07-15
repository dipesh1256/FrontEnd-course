#include<stdio.h>
#include<condio.h>

int main () {

    clrscr;

   int a,b,ans;

   printf("Enter the value of A : ");
   scanf("%d",&a);

   printf("Enter the value of B : ");
   scanf("%d",&b);

   ans=(a>b)?a:b;

   printf("The Biggest Value is : %d",ans);

 return  0;

}