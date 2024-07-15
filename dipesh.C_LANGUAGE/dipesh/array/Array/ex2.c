#include<stdio.h>
int main()
{
	
	
	int A[8];
	
	for(int i=0;i<=7;i++)
	{
		printf("enter the number %d :",i);
		scanf("%d",&A[i]);
	}
	
	for(int i=0;i<=7;i++)
	{
		printf(" the value of number A[%d] = %d\n",i,A[i]);
	}
	return 0;
}


/*


A[0] = 3
A[1] = 4
A[2] = 5
A[3] = 3
A[4] = 2
A[5] = 2
A[6] = 1
A[7] = 3


*/


