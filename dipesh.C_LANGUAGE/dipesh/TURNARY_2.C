#include<stdio.h>
#include<conio.h>

int main()
{
int a;
clrscr();

printf("enter the number :");
scanf("%d",&a);

(a%5&&3==0)?printf("it's divisible by 5 or 3:"):printf("it's not divisible by 5 or 3:");

return 0;
}