#include<stdio.h>

int print(){

int j,i,k=1;
	
	for(i=1; i<=5; i++){
	
		for(j=1; j<=5; j++){
	
			printf("%d\t",k++);
			
		}
		
		printf("\n");
	
	}
	return k;

}

int main (){

	int k=print();
//	printf("\nhet lathiya");
	

	return 0;
}