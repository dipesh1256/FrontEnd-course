// goto (jump statment)
//ex.1
#include<stdio.h>

int main (){
    
    int i,j,k,l,n;

    printf("\n");
	
	printf("Enter the number : l");
	scanf("%d",&l);

    printf("\n");


    int i=1;
    start:
    if(i<=n){

        printf("%d ",i);
        i++;

        goto start;
    }

    

}



/*

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




*/