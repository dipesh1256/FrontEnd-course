#include<stdio.h>

int main() {

   // this series is br like  A B C D E   \n  E F G H I   

  int i,j;

	i=65;
	
	do{
		j=65;
		do{
			printf("%c \t",j);
			j++;
		}while(j<=69);

		printf("\n");
		
		i++;
		
	}while(i<=69);
	
   
  return 0;
}





