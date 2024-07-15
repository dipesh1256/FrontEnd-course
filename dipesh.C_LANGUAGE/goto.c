// goto (jump statement)

#include<stdio.h>
int main ()
{
    int i=1;
    dipesh:
    if(i<=15){ 
        
        printf("%d\n",i);
        i++;
        goto dipesh;
    }
}