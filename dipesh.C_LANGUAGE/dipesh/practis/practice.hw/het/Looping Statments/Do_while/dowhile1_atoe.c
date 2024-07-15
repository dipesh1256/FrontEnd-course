int main() {
#include <stdio.h>

   // this series is br like  A A A A A    \n  B B B B B    \n  C C C C C \N D D D D D  

  int i=65,j=1,k=1;

	do{
		j=1;
		do{
			printf("%c \t",i);
			j++;
		}while(j<=5);

	printf("\n");
		
		i++;
		
	}while(i<=69);
	
   
  return 0;
}