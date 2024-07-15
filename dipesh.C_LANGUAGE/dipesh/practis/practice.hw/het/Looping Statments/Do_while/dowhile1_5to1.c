#include <stdio.h>
int main() {

   // this series is br like 1 2 3 4 5  \n  6 7 8 9 10  \n  11 12 13 14 15 

  int i=1,j=1,k=1;

	do{
		j=1;
		do{
			printf("%d \t",k++);
			j++;
		}while(j<=5);

	printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}