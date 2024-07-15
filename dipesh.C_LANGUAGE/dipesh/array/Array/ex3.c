#include<stdio.h>
int main()
{
	int math[5];
	int sci[5];
	int phy[5];
	int total[5],i;
	float per[5]; 
	
	for(i=0;i<=4;i++)
	{
		printf("Enter the marks of math student %d :",i+1);
		scanf("%d",&math[i]);
	}
	printf("\n");
	
		for(i=0;i<=4;i++)
		{
			printf("Enter the marks of Science student %d :",i+1);
			scanf("%d",&sci[i]);
		}
		printf("\n");
		
			for(i=0;i<=4;i++)
			{
				printf("Enter the marks of physics student %d :",i+1);
				scanf("%d",&phy[i]);
			}
			
			printf("\n");
	
	for(int i=0;i<=4;i++)
	{
		total[i]=math[i]+sci[i]+phy[i];
	
		per[i]=(total[i]*100/300);
	}
	
		for(i=0;i<=4;i++)
		{
			printf(" Total of Student[%d] = %d \n",i+1,total[i]);
	
			printf(" parcentage = %0.2f\n\n",per[i]);
		}
	
	return 0;
}


/*

Enter the marks of math 0 :78
Enter the marks of math 1 :89
Enter the marks of math 2 :67
Enter the marks of math 3 :89
Enter the marks of math 4 :67

Enter the marks of Science 0 :56
Enter the marks of Science 1 :69
Enter the marks of Science 2 :45
Enter the marks of Science 3 :65
Enter the marks of Science 4 :45

Enter the marks of physics 0 :80
Enter the marks of physics 1 :91
Enter the marks of physics 2 :85
Enter the marks of physics 3 :71
Enter the marks of physics 4 :55


 Total of Student[1] = 214
 parcentage = 71.00

 Total of Student[2] = 249
 parcentage = 83.00

 Total of Student[3] = 197
 parcentage = 65.00

 Total of Student[4] = 225
 parcentage = 75.00

 Total of Student[5] = 167
 parcentage = 55.00
 
*/
