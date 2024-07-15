#include <stdio.h>
int main() {

	// A program is series 55555  next line 44444 33333 22222 11111

  int i,j;

  for (i=1; i<=5; i++) {
	  
		for(j=1; j<=5; j++){
			printf("%d",j);
		}
		
		printf("\n");
	}

  return 0;
}