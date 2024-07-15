#include<stdio.h>

    int fibonacci(){

        int a=0, b=a,c=0,n;

        printf("Enter the Number : ");
        scanf("%d",&n);

        a=b;
        b=c;
        c=a+b;

        return c;
        
    }

    int main(){
        int a, c,n;
        a=fibonacci();

        for(int i=3; i<=n; ++i)
        {
            printf("The series is :%d ",c); 
        }

        printf("The series is :%d",c);
        
       // printf("the factorial of %d in: %d  ",a,factorial(a));


    return 0;
}