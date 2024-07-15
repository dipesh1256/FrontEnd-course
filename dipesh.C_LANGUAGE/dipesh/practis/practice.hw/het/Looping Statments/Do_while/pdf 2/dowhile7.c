#include <stdio.h>

int main() {

    

  int i=1,j,k=65,l=97;

	do{
	
		j=1;
		
		do{
			
			if(l%2==0){
			
			printf("%c \t",k);
			}else{
				printf("%c \t",l);
			}

			l++;
			k++;
			j++;
			
		}while(j<=i);
		
		
	
		printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}


/*  output 


	


*/ 
