#include<stdio.h>


void pattern(int n, char a)

{
	int k,i,f,j;
	 
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

}
int main (){

    int n;
    char a;

	 printf("Enter the value :");
	 scanf("%d",&n);
	 
	 printf("Enter the symbol :");
	 scanf(" %c",&a);
	 
     
    pattern(n,a);


	
	return 0;
}



/*

Enter the value :5
Enter the symbol :$

      $      
     $ $     
    $ $ $    
   $ $ $ $   
  $ $ $ $ $  
 $ $ $ $ $ $ 
  $ $ $ $ $  
   $ $ $ $
    $ $ $
     $ $
      $
	  
	  
*/


