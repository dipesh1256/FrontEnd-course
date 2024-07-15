#include<stdio.h>

int main(){
	
	int i,j,k,l;
	
	printf("\n");
	
	printf("Enter the number :");
	scanf("%d",&l);
	
	
	printf("\n");
	

		for(i=1; i<=l; i++){
		
		
			for(j=l; j>=1-i; j--){
				
				printf(" ");
		
			}
			
			for(k=1; k<=i; k++){
				
				printf(" *");
			}
			
		
			printf("\n");
	}
	

return 0;
	
}



/*  output  




* * * * * * * * * * *
 * * * * * * * * * *
  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *


*/ 

