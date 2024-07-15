#include <stdio.h>

 
int main()
{
    int i,j,n;
    char ch;
 
    printf("Enter number of rows: ");
    scanf("%d%c",&n,&ch);
	
    printf("Enter the symbol: ");
    ch=getchar();
	
    i=1;
                 	
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
            printf("%c",ch);
     		    
			++j;
				
    	}while(j<=i*2-1);                    
        
		printf("\n");
		
		++i;
		
    }  while(i<=n);  
    
	i=n-1;     
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
            printf("%c",ch);
     		    
			++j;
				
    	}while(j<=i*2-1);   
	                  
        printf("\n");
 
		--i;
 
    }while(i>0);     
          
    return 0;
}



/*  output 

Enter number of rows: 10

Enter the symbol: 1

          1
         111
        11111
       1111111
      111111111
     11111111111
    1111111111111
   111111111111111
  11111111111111111
 1111111111111111111
  11111111111111111
   111111111111111
    1111111111111
     11111111111
      111111111
       1111111
        11111
         111
          1
		  
		  
	


Enter number of rows: 10

Enter the symbol: $

          $
         $$$
        $$$$$
       $$$$$$$
      $$$$$$$$$
     $$$$$$$$$$$
    $$$$$$$$$$$$$
   $$$$$$$$$$$$$$$
  $$$$$$$$$$$$$$$$$
 $$$$$$$$$$$$$$$$$$$
  $$$$$$$$$$$$$$$$$
   $$$$$$$$$$$$$$$
    $$$$$$$$$$$$$
     $$$$$$$$$$$
      $$$$$$$$$
       $$$$$$$
        $$$$$
         $$$
          $
	
		  
*/ 		  