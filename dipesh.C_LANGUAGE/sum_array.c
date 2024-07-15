#include<stdio.h>             
#define n 5

void sum(int arr[])             
{
    int i,f;

    printf("\n");

    for(i=0; i<n; i++)           
    {
        printf("%d ",arr[i]);           

        if(i!=n-1)
        {
            f=arr[i]+arr[i+1];
            printf(" %d\t\n",f);
        }
        else  
        {
            printf("\n");
        }
    }     
}

int main()
{      
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("enter value :");
        scanf("%d",&a[i]);

}
   sum(a);

   return 0;
}