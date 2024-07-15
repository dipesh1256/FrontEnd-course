#include<stdio.h>

int het(int s, int e){

    int i,j;
    for(i=s; i<=e; i++){
        
        for(j=1; j<=5; j++){
			
			if(i%2!=0)	{
				
			printf("%d ",i);
			}
		}
		printf("\n");
    
	}
	return i;

}

int main (){

	int s,e,k;

	printf("enter the start value :");
	scanf("%d",&s);

	printf("enter the end value :");
	scanf("%d",&e);


	// upper na fun. ma mokalva mate 
	// jetla vari. hoi ae levna ....
	het(s,e);

	//
	//printf("%d",i);


	//int i=het(s,e);

	return 0;
}
