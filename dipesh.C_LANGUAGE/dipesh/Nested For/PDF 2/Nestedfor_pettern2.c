#include<stdio.h>

int main(){

	printf("\n");

	for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}


/* * output *

 1
 22
 333
 4444
 55555


 */