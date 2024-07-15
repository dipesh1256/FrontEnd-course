#include<stdio.h>

int het(int a, int b){

    int sum;

    sum=a+b;

	return sum;

}

int main (){

	int a,b,k;

	printf("enter the A value :");
	scanf("%d",&a);

	printf("enter the B value :");
	scanf("%d",&b);


	//k=het(a,b);

	printf("The value Of A+B: %d",het(a,b));

	printf("\n%d \n%d\n",a,b);
	return 0;
}