#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=1; i<=5; i++){
	
		for(j=i; j>=1; j--){
			
			printf("%d",i);
			
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