#include<stdio.h>

void print1to10(){

int j,i,k=65;
	
	for(i=1; i<=7; i++){
	
		for(j=1; j<=4; j++){
	
			printf("%c\t",k++);
			
		}
		
		printf("\n");
	
	}

}

int main (){

	print1to10();
//	printf("\nhet lathiya");
	

	return 0;
}