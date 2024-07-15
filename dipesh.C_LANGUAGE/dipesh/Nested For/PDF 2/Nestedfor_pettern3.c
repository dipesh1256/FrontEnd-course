#include<stdio.h>

int main(){
	
	int i,a,j,b;
	
	for(i=5; i>=1; i--){
	
		for(j=i; j<=5; j++){
			
			printf("%d",i);
		}
		printf("\n");
	}
	
	
	return 0;
	
}



/* * output * 
 
 5
 44
 333
 2222
 11111
 
 */