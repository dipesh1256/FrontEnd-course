#include<stdio.h>
int main()
{
    int i=2,j,k;
    
    printf("enter the value :");
    scanf("%d",&k);

    while (i<=k)
    {
        j=1;

    while (j<=k)
    {
        printf("%d",i,2);
        j++;
    }
        i++;
        printf("\n");
    }
    return 0;
}