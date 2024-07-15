#include<stdio.h>
#include<conio.h>

int main() {

  int age;

  clrscr();

    printf("Enter YOur Age :");
    scanf("%d",&age);

   if(age>=18) {
   printf("Can Do Vote");
    }
    else{
    printf("Can't Vote");
    }


 return 0;

}