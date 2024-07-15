#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=65; i<=69; i++){
	
		for(j=i; j<=5; j){
			
			 printf("%c",j);
		}
		printf("\n");
	}
	
	
	return 0;
	
}

/*  * output * 
 
 A
 AB
 ABC
 ABCD
 ABCDE
 
 */