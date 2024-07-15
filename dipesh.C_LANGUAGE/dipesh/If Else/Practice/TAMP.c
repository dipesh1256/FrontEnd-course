#include<stdio.h>
#include<conio.h>

int main() {

  int a;

  clrscr(); 

    printf("Enter the tamp :");
    scanf("%d",&a);

   if(a<0) {
   printf("Tamperature is (%d) Freezy",a);
    }
    else if(a<10) {
   printf("Tamperature is (%d) Very Cold Weather",a);
    }
    else if(a<20) {
   printf("Tamperature is (%d) Cold Weather",a);
    }
    else if(a<30) {
   printf("Tamperature is (%d) Normal Tamperature",a);
    }
    else if(a<40) {
   printf("Tamperature is (%d) it's Hot",a);
    }
    else{
   printf("Tamperature is (%d) Very Hot",a);
    }
    
 return 0;

}