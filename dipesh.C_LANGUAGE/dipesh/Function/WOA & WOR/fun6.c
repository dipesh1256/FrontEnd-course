#include<stdio.h>

void print(){

	int i,j,k,l,n;
	char s;

	
	printf(" Enter the number: ");
	scanf("%d%c",&n,&s);
	
    printf("Enter the symbol: ");
    s=getchar();

		for(i=1; i<=n; i++){
		
			for(j=1; j<=n-i; j++){
				
				printf(" ");
		
			}
			
			for(j=1; j<=i; j++){
				
				printf("%c",s);
			}
			
		
			printf("\n");
	}
	
	for(i=n+1; i>=1 ; i--){
	
		for(j=n; j>=i; j--){
			
				printf(" ");
			
		}
		for(j=1; j<=i; j++){
			
			
				printf("%c",s);
		}
		
		
		printf("\n");		
		
	} 
}

int main (){

	print();
//	printf("\nhet lathiya");
	

	return 0;
}