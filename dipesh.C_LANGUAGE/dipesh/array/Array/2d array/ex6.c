#include <stdio.h>

int main() 
{
    
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};


	// for 1 to 9

    printf("Array=1: \n");
    for (int i = 0; i < 3; i++) 
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d ", A[i][j]);
			}printf("\n");
			
		}
		
		printf("\n");
			
			// for 10 to 18
			
			printf("Array=2: \n");
			
			for (int i = 0; i < 3; i++) 
		{
		           	for (int j = 0; j < 3; j++)
		        	{
			        	printf("%d ",B[i][j]);
			        	
			        
		        	}
		
		    printf("\n");
		}	
		
		
		printf("\n");
		//for total
	
        printf("Total Array:\t \n");
    
        	for (int i = 0; i < 3; i++) 
		{    
        
         for (int j = 0; j < 3; j++)
			{
				printf("%d ", A[i][j] + B[i][j]);
			}	     
			printf("\n");
		}
        printf("\n");
		
    return 0;
}

/*

Array=1:        
1 2 3           
4 5 6          
7 8 9      
    
Array=2:       
10 11 12        
13 14 15        
16 17 18        

 Total Array:
 11 13 15
 17 19 21
 23 25 27

*/
 
