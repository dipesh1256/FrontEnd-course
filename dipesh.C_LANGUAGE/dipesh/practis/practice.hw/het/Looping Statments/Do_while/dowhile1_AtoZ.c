#include <stdio.h>
int main() {

   // this series is br like  A B C D E   \n  E F G H I   

  int i=1,j=1,k=65;

	do{
		j=1;
		do{
			printf("%c \t",k++);
			j++;
		}while(j<=5);

	printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}