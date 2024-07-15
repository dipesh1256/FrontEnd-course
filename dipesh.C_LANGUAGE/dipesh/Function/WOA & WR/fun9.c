#include<stdio.h>

int print() {
    int n,i;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    for (i = -n; i <= n; i++) {
        printf("%d  ", i);
    }
   return i; 
}

int main (){

	int i=print();
//	printf("\nhet lathiya");
	

	return 0;
}