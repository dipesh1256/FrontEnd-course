#include<stdio.h>
#include<conio.h>

int main () {

    int a,b,c,ans;

    clrscr();

   printf("Enter the value of A : ");
   scanf("%d",&a);

   printf("Enter the value of B : ");
   scanf("%d",&b);

   printf("Enter the value of  C:");
   scanf("%d",&c);

   ans=(a<b && a<c)?a:(b<b && b<c)?b:c;

   printf("The smallest Value is : %d",ans);

 return  0;

}