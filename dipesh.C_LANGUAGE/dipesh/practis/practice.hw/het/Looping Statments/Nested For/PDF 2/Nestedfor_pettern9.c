#include<stdio.h>

int main(){
	
	int i,j,a=65;
	
	for(i=1; i<=5; i++){
	
		for(j=1; j<=i; j++,a++){
			
			printf("%c",a);
		}
		printf("\n");
	}
	
	
	return 0;
	
}

/*  * output * 
 
 A
 BC
 DEF
 GHIJ
 KLMNO
 
 */