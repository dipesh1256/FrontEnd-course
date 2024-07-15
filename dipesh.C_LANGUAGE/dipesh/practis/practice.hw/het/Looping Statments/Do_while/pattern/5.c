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
				
    	}while(j<=i+1);  
                       
		j=1;
        do
        {
           
		   
		   printf("* ");
     		    
			j++;
				
    	}while(j<=n-i);   
	                  
        printf("\n");
 
		++i;
 
    }while(i<=n-1);     
          
    return 0;	
	
 }



/*  output  

Enter number of rows: 10

  * * * * * * * * *
   * * * * * * * *
    * * * * * * *
     * * * * * *
      * * * * *
       * * * *
        * * *
         * *
          *
		  
		  
*/ 		  