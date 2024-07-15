#include <stdio.h>

 
int main()
{
    int i,j,n;
	
	
	printf("Enter number of rows: ");
	scanf("%d",&n);
	
	
    i=1;
    j=1;             	
    do 
    {
		j=1;
        do
        {
            printf(" ");
     		    
			++j;
				
    	}while(j<=n-i+1);    
        
		j=1;
		
        do
        {
		  
		  printf("* ");
     		    
			++j;
				
    	}while(j<=i);                    
        
		printf("\n");
		
		++i;
		
    }  while(i<=n);  
    
	return 0;
	
}


/*  ouput 


Enter number of rows: 7


       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
 
 */ 