#include <stdio.h>

int main() {

    

  int i=1,j,k;

	do{
		j=1;
		do{
			printf("%d \t",j);
			j++;
		}while(j<=i);

	
		printf("\n");
		
		i++;
		
	}while(i<=5);
	
   
  return 0;
}

/* output 

1
2       2
3       3       3
4       4       4       4
5       5       5       5       5

*/ 



