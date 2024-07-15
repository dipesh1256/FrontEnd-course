#include <stdio.h>

int main() {
   // this series is br like 1 1 1 1 1   \n  2 2 2 2 2   \n  3 3 3 3 3  

  int i=1,j=1,k=1;

	do{
		j=1;
		do{
			printf("%d \t",i);
			j++;
		}while(j<=5);

	printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}