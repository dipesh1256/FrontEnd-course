#include<stdio.h>
//#define n 5

int n;

void plus(int arr[],int f)
{
    int o=0;
     printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);

        if (i!=n-1){
        
        f=arr[i]+arr[i+1];
        printf("%d\t\t\n",f);

        }else{
      
        printf("\n");

        }
       
	}
}

int main()
{

    printf("Enter The Size if Array:");
    scanf("%d",&n);
    printf("\n");

	int a[n],f;
	for(int i=0;i<n;i++)
	{
		printf("Enter Value:");
		scanf("%d",&a[i]);
        
	}

	plus(a,f);
}