#include <stdio.h>

int main()
{
    int num,m,n;

    printf("enter the number:");
    scanf("%d",&num);

    if(num==0)
    {
	n=0;
    }
    else if(num<=0){
	n=-1;
    }
    else {
	n=1;
    }

    printf("%d",n);
    return 0;
}