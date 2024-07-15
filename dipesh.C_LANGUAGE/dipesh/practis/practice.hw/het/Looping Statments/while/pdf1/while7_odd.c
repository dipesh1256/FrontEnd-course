#include <stdio.h>
int main() {

	// A program is series 1 1 1 1 1     next line 3 3 3 3 3     

  int i=1,j;

  while (i<=20) {
		
		for(j=1; j<=5; j++)
		{
		
			if (i%2==1){
				printf("%d",i);
			}
		}
		
		i++;
	
		printf("\n");
	}

  return 0;
}