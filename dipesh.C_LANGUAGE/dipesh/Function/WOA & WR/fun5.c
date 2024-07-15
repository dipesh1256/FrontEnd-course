#include<stdio.h>

int print(){

	int n,num,nu1,temp=1,i;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		num =i*temp;
		printf("%d\t",num);
		temp*=2;
	}

    return num;

}

int main (){ 
	int num=print();
//	printf("\nhet lathiya");
	

	return 0;
}