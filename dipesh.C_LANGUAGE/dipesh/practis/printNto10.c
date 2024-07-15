#include<stdio.h>
int main()
{
    int i=0,n;

    printf("enter the value :");
    scanf("%d",&n);

    while (i<=n)
    {
        i++;

        if(i%2 ==1)
        {
            printf("%d\n",i);

        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}