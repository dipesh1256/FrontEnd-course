#include<stdio.h>
int main()
{
	int n,k,i,f,j;
	
	char a;
	
	
	 printf("Enter the value :");
	 scanf("%d",&n);
	 
	 printf("Enter the symbol :");
	 scanf(" %c",&a);
	 
	 
	printf("\n");
	
	for(i=n; i>=1; i--)
	{
		
		for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		
		for(k=n; k>=i; k--) 
		{
			printf(" %c",a);
		}
		
			printf("\n");
	}
	
	for(i=0; i<=n; i++)
	{
		
		for(j=0; j<=i; j++)
		{
			printf(" ");
		}
		
		for(k=n; k>=i; k--)
		{
			printf("%c ",a);
		}
		
			printf("\n");
	}
	
	return 0;
}


/*

      @
     @ @
    @ @ @
   @ @ @ @
  @ @ @ @ @
 @ @ @ @ @ @
  @ @ @ @ @
   @ @ @ @
    @ @ @
     @ @
      @
	  
	  
*/


