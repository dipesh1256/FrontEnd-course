#include <stdio.h>
int main() {

	// A program is series 5 5 5 5 5   next line 4 4 4 4 4  

  int i=5,j;

  while (i>=1) {
		
		j=1;
		
		while( j<=5; ){
			printf("%d",i);
			
			j++;
		}
		
		i--;
	
		printf("\n");
	}

  return 0;
}