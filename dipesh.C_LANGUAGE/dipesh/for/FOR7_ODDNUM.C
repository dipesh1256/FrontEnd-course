#include <stdio.h>
// ODD Number program with user value
int main()
{
    
    int n;
    
    printf("Enter the number:");
    scanf("%d",&n);
     
    for(int i=1; i<=n; i+=2){
        
        printf("%d\n",i);
    }
    
    
    return 0;
}



















/*#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Odd numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}*\
