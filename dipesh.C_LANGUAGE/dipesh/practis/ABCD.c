#include<stdio.h>
int main()
{
    char i=65,j;

    while (i<70)
    {
        j=65;
        while (j<70){
            printf("%c",i);
            j++;
        }
        i++;
        printf("\n");
        
    }
    
    return 0;
    
}