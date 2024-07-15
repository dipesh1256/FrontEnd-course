#include <stdio.h>
int main()
{
	int i,j,k=65,l=97;
	
	
	for(i=1;i<=5;i++)                                                       
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				printf("%c",l++);
				k++;
			}
			else
			{
				printf("%c",k++);
				l++;
			}
		}
				printf("\n");
	}
	return 0;
}

/*  * output * 
 
 A
 bC
 DEf
 gHiJ
 kLmNo
 
 */