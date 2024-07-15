#include <stdio.h>

int main() 
{
    
    int r,c,i,j,size,sum=0,sum1=0,sum2=0;
    
    printf("Enter the size of Row : ");
    scanf("%d",&r);

    printf("Enter the size of collume: ");
    scanf("%d",&c);
	
	printf("\n");


    int  a[r][c];
    

    for (int i = 0; i < r; i++) 
		{
			for (int j = 0; j < c; j++)
			{
				printf(" ENTER THE VALUE OF ARRAY :");
				scanf("%d",&a[i][j]);
				if(j>i)
				{
					sum+=a[i][j];
				}
				if(j<i)
				{
					sum1+=a[i][j];
				}
				if(j==i)
				{
					sum2+=a[i][j];
				}
			}
		}
		printf("\n");
		
		

	// for 1 to 9

    printf("Array=1:\n");
    for (int i = 0; i < r; i++) 
		{
			for (int j = 0; j < c; j++)
			{
	
			printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		
		printf("sum of upper traingle = %d\n",sum);
		
		printf("sum of lower traingle = %d\n",sum1);

     	printf("sum of Middel traingle = %d\n",sum2);
		
	return 0;
}
	
/*         
	
Enter the size of Row : 3
Enter the size of collume: 3

 ENTER THE VALUE OF ARRAY :1
 ENTER THE VALUE OF ARRAY :2
 ENTER THE VALUE OF ARRAY :3
 ENTER THE VALUE OF ARRAY :4
 ENTER THE VALUE OF ARRAY :5
 ENTER THE VALUE OF ARRAY :6
 ENTER THE VALUE OF ARRAY :7
 ENTER THE VALUE OF ARRAY :8
 ENTER THE VALUE OF ARRAY :9

Array=1:
1 2 3
4 5 6
7 8 9
sum of upper traingle = 11
sum of lower traingle = 19
sum of Middel traingle = 15

*/