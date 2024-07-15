#include<stdio.h>
int main()
{
 int i=1,j;
 int a=65,b=97;
 
 do
 {
 j=1;
 do{
 if(i%2==1)
 {
 printf("%c",a);
 }else{
 printf("%c",b);
 }
 j++;
 b++;
 a++;
 
 }while(j<=i);
 printf("\n");
 
 i++;
 }while(i<=5);
 
 return 0;
 }
 