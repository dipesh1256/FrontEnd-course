 #include<stdio.h>

int main (){

	int i,n,v=1;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	printf(" The series is : ");
	
	for(i=0; i<=n; i++){
		printf("%d \t",v); 
		v=v*2; // OR i*=2 
	}

return 0;
}