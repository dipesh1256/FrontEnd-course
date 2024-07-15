#include<stdio.h>
int main()
{
    int i,n;

    printf("enter the number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i*i);

        }else{
            printf("%d\t",i);
        }
    }
    return 0;
}
\\ 1  4  3  16  5.....