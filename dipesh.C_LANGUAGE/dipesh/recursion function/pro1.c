#include<stdio.h>

    int factorial(int number){

        if(number == 1 || number == 0)
        {
            return 1;
        }else
        {
            return(number * factorial(number-1));
        }
    }

    int main(){
        int a;
        printf("Enter the number :");
        scanf("%d",&a);
        printf("the factorial of %d in: %d  ",a,factorial(a));

    return 0;
}