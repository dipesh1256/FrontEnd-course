#include<stdio.h>

int main(){
	
	int i,j,k,l;
	
	printf("\n");
	
	
	printf("Enter the number :");
	scanf("%d",&l);
	
	
	printf("\n");

		for(i=l; i>=0; i--){
		
			for(j=1; j<=l-i; j++){
				
				printf(" ");
		
			}
			
			for(k=1; k<=i; k++){
				
				printf("* ");
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

