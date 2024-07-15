#include <stdio.h>

int main() 
{
    
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};


	// for 1 to 9

    printf("Array=1:\tArray=2: \tTotal Array:\n");
    for (int i = 0; i < 3; i++) 
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d ", A[i][j]);
			}
			
			// for 10 to 18
			printf("\t\t");
			
		           	for (int j = 0; j < 3; j++)
		        	{
			        	printf("%d ",B[i][j]);
		        	}
		
		
		
		//for total
		
        printf("\t");
         for (int j = 0; j < 3; j++)
			{
				printf("%d ", A[i][j] + B[i][j]);
			}	     printf("\n");
		}

   
    return 0;
}
/*

	Array=1:        Array=2:        Total Array:
	1 2 3           10 11 12        11 13 15
	4 5 6           13 14 15        17 19 21
	7 8 9           16 17 18        23 25 27


*/



