
/*

#include <stdio.h>
int main()
{
	int i,j,k=1;
	
	for(i=5;i>=1;i--)
	{
		for(j=i; j<=5; j++)
		{
			
			if(k%2==0){
				printf("%d",k);
			}else{
				printf("%d",n);
			}
			
		}
		printf("\n");
	}
	return 0;
}


  * output * 
 
 1
 01
 010
 1010
 10101
 
 
 */
 
 
  
 
 #include <stdio.h>

int main()
{
	int i,j,k=1;

	printf("\n");
	
	for(i=5;i>=1;i--)
	{
		for(j=i; j<=5; j++)
		{
			printf("%d",k);
			if(k==0){
				k=1;
			}else{
				k=0;
			}
			
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}

