#include <stdio.h>
// EVEN Number program with user value
int main()
{
    
    int n;
    
    printf("Enter the number:");
    scanf("%d",&n);
     
    for(int i=2; i<=n; i+=2){
        
        printf("%d\n",i);
    }
    
    
    return 0;
}
