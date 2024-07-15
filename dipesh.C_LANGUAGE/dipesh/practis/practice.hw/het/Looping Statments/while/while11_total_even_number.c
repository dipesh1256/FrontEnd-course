#include<stdio.h>

int main(){
	
	
	int i=1,sum=1,n;
	
	
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	
	
	while(i<=n){

		if(i%2==1){
		
			printf("Even number is %d\n",sum);
		
		}
		
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

		if(i%2==1){
		
		
		}
		
		i++;
		 
		 sum+=i;
	}
	
			printf("Even number is %d\n",sum);


	
	return 0;
}


*/