#include <stdio.h>
int main() {

	// A program is series  11 12 13 14 15   Next line  16 17 18 19 20    

  int i=1,j=1,a=11;

  while (i<=5) {
			
			j=1;
			
		while(j<=5)
		{		
				
			printf(" %d ",a++);
				
				j++;
		}
			i++;
		printf("\n");
	} 

  return 0;
}