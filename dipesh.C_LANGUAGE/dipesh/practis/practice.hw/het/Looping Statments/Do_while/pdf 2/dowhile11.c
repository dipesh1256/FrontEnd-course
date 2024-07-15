#include <stdio.h>

int main() {

    

  int i=1,j,k=1,l=0;

	do{
	
		j=1;
		
		do{
			
			if(k%2==1){
			
			printf(" 0 ");
			}else{
				printf(" 1 ");
			}

			k++;
			j++;
			
		}while(j<=i);
		
		
	
		printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}


/*  output 

 0
 1  0
 1  0  1
 0  1  0  1
 0  1  0  1  0

	


*/ 
