#include<stdio.h>

int fibonacci(int number){

int a=0, b=a, c=0,n;

printf("enter the number :");
scanf("%d",&n)

for(int i=3; i<=n; ++1){
printf("%d",c);
a=b;
b=c;
c=a+b;
}
 return c;
 }
 
 int main(){
 int a,c;
 a=fibonacci(c);
 
 printf("the serise is %d",c);
 
 return 0;
 }