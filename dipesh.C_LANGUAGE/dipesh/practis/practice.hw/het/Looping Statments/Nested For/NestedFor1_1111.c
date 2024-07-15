#include <stdio.h>
int main() {

	// A program is series 1 1 1 1 1  next line 2 2 2 2 2 

  int i,j;

  for (i=1; i<=5; ++i) {
	  
		for(j=1; j<=5; j++){
			printf("%d",i);
		}
		
		printf("\n");
	}

  return 0;
}