#include <stdio.h>

int main() {

    

  int i=1,j,k;

	do{
		j=1;
		k=65;
		do{
			
			printf("%c \t",k);
		
			k++;
			j++;
			
			
		}while(j<=i);

	
		printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}


/*  output 

A
A       B
A       B       C
A       B       C       D
A       B       C       D       E


*/ 
