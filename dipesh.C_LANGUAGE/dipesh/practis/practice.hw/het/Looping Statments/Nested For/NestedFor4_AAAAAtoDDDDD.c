#include <stdio.h>
int main() {

	// A program is series A A A A A  next line B B B B B

  int i,j,a=65,b=70;

  for (i=1; i<=5; ++i) {
	  
		for(j=1; j<=5; j++){
			printf("%c",j);
		}
		
		printf("\n");
	}

  return 0;
}