#include <stdio.h>

int main() {

    

  int i=1,j,k;

	do{
		j=1;
		k=5;
		do{
			
			
			printf("%d \t",k);
		
			k--;
			j++;
			
			
		}while(j<=i);

	
		printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}


/*  output 

5
5       4
5       4       3
5       4       3       2
5       4       3       2       1



*/ 
