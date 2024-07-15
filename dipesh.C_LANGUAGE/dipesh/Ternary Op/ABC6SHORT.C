#include<stdio.h>
#include<conio.h>

int main () {

    int a,b,c,ans;

    clrscr();

    printf("Enter the value of Three Number :");
    scanf("%d %d %d",&a,&b,&c);

    (a<b && a<c)?printf("a is smallest"):(b<c && b<a)?printf("b is smallest "):printf("c is smallest");

 return  0;

}