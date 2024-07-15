#include<stdio.h>


int main(){

	int i=1,j,n;

	printf("Enter the number :");
	scanf("%d",&n);
		
	
	while(i<=n){
	
		if(i%2==0){
			printf("this is odd number :%d \n",i);
		}else{
			printf(" this is even number :%d \n",i);
		}
		i++;
	}

	return 0;
}



/* trick 2 

#include<stdio.h>


int main(){

	int i=-1,j,n;
	
	while(i<=50){
		
		printf("%d ",i);
		
		i=i+2;
	}
	

	return 0;
}


*/ 

