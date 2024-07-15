#include<stdio.h>
#include<conio.h>

int main() {

  int age;

  clrscr(); 
//  Information is included by sex and age group as follows: 0-14 years (children), 15-24 years (early working age),
//  25-54 years (prime working age), 55-64 years (mature working age), 65 years and over (elderly). 

    printf("Enter YOur Age :");
    scanf("%d",&age);

   if(age<=14) {
   printf("You are children");
    }
    else if(age<=24){
    printf("Your age is Early working age");
    }
    else if(age<=54){
        printf("Your age is Prime working age");
    }
    else if(age<=64){
        printf("Your age is Mature working age");
    }else{
        printf("You are a Elderly");
    }


 return 0;

}