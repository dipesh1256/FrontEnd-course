#include <stdio.h>
int main() {

   // this series is br like 10 10 10 10 10    \n  9 9 9 9 9    \n  8 8 8 8 8  

  int i=10,j=1,k=1;

	do{
		j=1;
		do{
			printf("%d \t",i);
			j++;
		}while(j<=5);

	printf("\n");
		
		i--;
		
	}while(i>=1);
	
   
  return 0;
}