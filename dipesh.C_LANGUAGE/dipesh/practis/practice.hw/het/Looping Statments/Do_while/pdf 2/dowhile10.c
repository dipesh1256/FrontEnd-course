#include <stdio.h>

int main() {

    

  int i=5,j;

	do{
	
		j=i;
		
		do{
			
			printf("%d \t",j);
			
			j++;
			
		}while(j<=5);
	
		printf("\n");
		
		i--;
		
	}while(i>=1);
	
   
  return 0;
}


/*  output 

5
4       5
3       4       5
2       3       4       5
1       2       3       4       5

*/ 
