#include<stdio.h>

int main (){

int i,j,k,l,r,c;

printf("Enter the size of Row : ");
scanf("%d",&r);

printf("Enter the size of collume: ");
scanf("%d",&c);


    int  a[r][c];

    for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
            printf("Enter the value : ");
            scanf("%d",&a[i][j]);
            }

        }
    

    
    for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
            printf(" %d ",a[i][j]);
            }
            printf("\n");
        }
    

    return 0;
}