#include <stdio.h>

//This is a calculate area of circle program

int main()
{

	float  pie=3.14,cir,rad;

	printf("Enter the value of Radius  :");
	scanf("%f",&rad);

	cir=pie*rad*rad;

	printf("The Value of Circle : %f",cir);

	return 0;
}