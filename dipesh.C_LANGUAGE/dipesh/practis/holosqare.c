#include <stdio.h> 

int main() 
{ 
	int a= 10,j,i; 

	for (i=0; i<a; i++) 
	{ 
			for (j=0; j<a; j++)
			{ 
				if (i>0 && i<a-1 && j>0 && j<a-1)
					{ 
						printf("  "); 
					} else 
						{ 
							printf("* "); 
						} 
			} 
		printf("\n"); 
	} 
	return 0; 
}


/*

  output  
  
	* * * * *
	*       *
	*       *
	*       *
	* * * * *


*/


/*

trick 2




// ex 4


#include <stdio.h>

int main()
{
    int i, j, N;

    // Code Block To Get The Input From The User 
    printf("Enter number of rows To Print Hollow Square : ");
    scanf("%d", &N);

   
    for(i=1; i<=N; i++)
    {
       
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                // Code Bloack To Print The First & Last Column 
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }

        
        printf("\n");
    }

    return 0;
}



*Thank you for your business! We look forward to working with you again.
*/