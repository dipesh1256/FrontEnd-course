#include <stdio.h>

int main() {
	
    int n, sum;
	
    printf("Enter the value of n: ");
    scanf("%d",&n);
	
    sum=n*(n+1)/2;
    
	printf("The Sum of numbers 1 to %d is :%d",n,sum);
	
    return 0;
}
