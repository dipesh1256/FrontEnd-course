#include <stdio.h>
int main() {

	// A program is series 1 1 1 1 1  next line 2 2 2 2 2 

  int i=1,j;

  while (i<=5) {
	  
	  j=1;
	  
		while( j<=5){
			printf("%d",i);
			
			 j++;
		}
		
		i++;
	
		printf("\n");
	}

  return 0;
}