#include<stdio.h>

int main(){
	
	int i,a=1,j,b;
	
	for(i=1; i<=5; i++){
	
		for(j=1; j<=i; j++){
			
			printf("%d",a++);
		}
		printf("\n");
	}
	
	return 0;
	
}

/* * output * 
 
 1
 23
 456
 78910
 1112131415
 
 */