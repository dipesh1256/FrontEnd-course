#include<stdio.h>

void fun1(int a, int b){

    if(a<b) {
        printf("A samllest then B");
    }

    if(a>b){
        printf("A largest then B");
    }

}


int main() {

  int ans,a,b;

    printf("enter the start value :");
	scanf("%d",&a);

	printf("enter the end value :");
	scanf("%d",&b);20

  fun1(a,b);



 return 0;

}