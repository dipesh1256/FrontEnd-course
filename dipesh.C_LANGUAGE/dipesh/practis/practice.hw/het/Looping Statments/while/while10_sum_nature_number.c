#include<stdio.h>

int main(){
	
	
	int i=1,sum=1,n;
	
	
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	
	
	while(i<=n){
		
		printf("The next sum is :%d \n",sum);
		
		i++;
		 
		 sum+=i;
	}
	
	
	return 0;
}


/* trick 2 


#include<stdio.h>

int main(){
	
	
	int i=1,sum=1,n;
	
	
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	
	
	while(i<=n){
		
		
		
		i++;
		 
		 sum+=i;
	}
	printf("The next sum is :%d \n",sum);
	
	return 0;
}

*/