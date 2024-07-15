#include <stdio.h>
int main() {

	// A program is series 1 2 3 4 5  next line 1 2 3 4 5  

  int i=1,j;

  while (i<=5) {
		
		j=1;
		
		while(j<=5 ){
			printf("%d",j);
		
		j++;
		}
		
		
		
		i++;
	
		printf("\n");
	}

  return 0;
}