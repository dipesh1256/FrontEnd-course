#include<stdio.h>

int fun1(int a, int b){

    int c;

    if(a<b) {
        c=a;    
    }

    if(a>b){
        c=b;
    }
    return c;

}

int main() {

  int c,a,b;

    printf("enter the start value :");
	scanf("%d",&a);

	printf("enter the end value :");
	scanf("%d",&b);

    
    c=fun1(a,b);

        printf("%d is Smallest ",c);


 return 0;

}