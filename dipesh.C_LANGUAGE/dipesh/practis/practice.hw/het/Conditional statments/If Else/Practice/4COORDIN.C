#include <stdio.h>

int main()
{
    int x,y;

    printf("enter the value of X:");
    scanf("%d",&x);

    printf("Enter the value of Y:");
    scanf("%d",&y);

    if(x>0&&y>0)
    {
	printf("This point (%d %d) is in first quater",x,y);
    }
    else if(x<0 && y>0){
       printf("This point (%d %d) is in second quater",x,y);
    }
    else if(x<0 && y<0){
	printf("This point (%d %d) is in third quater",x,y);
    }else if(x<0 && y>0){
    printf("This point (%d %d) is in forth quater",x,y);
    }else{
    printf("This point (%d %d) is in fifth 0 0 quater",x,y);
    }
    
    return 0;
}