/*#include<stdio.h>

int main(){
	
	int i,a,j,b;
	
	
	for(i=1; i<=5; i++){
		
		for(j=i; j>=1; j++){
			
			printf("%d",i);
		}
		printf("\n");
	}
	
	
	return 0;
	
}

*/


// when user enter value...

#include<stdio.h>

int main(){
	
	int i,a,j,b;
	
	
	printf("Enter the row (→) :");
	scanf("%d",&a);
	
	
	for(i=1; i<=a; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	return 0;
	
}



/* * output * 
 
 1
 12
 123
 1234
 12345 to n enter the value. 
 
 
 */

