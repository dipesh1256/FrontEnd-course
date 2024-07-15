#include<stdio.h>
int main()
{
	int A[500],total=0,i,n;
	
		printf("Enter the size of Elements sum :");
		scanf("%d",&n);
	
		printf("\n Enter the number Bellow \n"); 
	
	for(i=0;i<n;i++)
	{
		printf("Number %d :",i+1);
		scanf("%d",&A[i]);
	}
	
	for(i=0; i<n; i++)    
	{      
		total=total+A[i];         
	} 
	    
		printf("\n Total Sum is :%d\n ",total);
	     
	return 0;      
}


/*

Enter the size of Elements sum :10

 Enter the number Bellow
Number 1 :1
Number 2 :2
Number 3 :3
Number 4 :4
Number 5 :5
Number 6 :6
Number 7 :7
Number 8 :8
Number 9 :9
Number 10 :10

 Total Sum is :55
 
*/