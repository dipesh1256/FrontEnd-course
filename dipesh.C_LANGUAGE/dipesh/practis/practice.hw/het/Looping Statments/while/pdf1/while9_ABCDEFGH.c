#include <stdio.h>
int main() {

	// A program is series 2 2 2 2 2    next line 4 4 4 4 4    

  int i=1,j,a=65;

  while (i<=1) {
		
		j=1;
		
		while(j<=5)
		{		
				printf(" %c ",a++);
				
				j++;
		}
		i++;
		
		printf("\n");
	} 

  return 0;
}