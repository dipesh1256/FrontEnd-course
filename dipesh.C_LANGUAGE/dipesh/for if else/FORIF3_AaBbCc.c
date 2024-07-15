
// print this series like  A a  B b  C c  D d  E e.....
#include <stdio.h>

int main()
{
    
   int a=0,b,n;
   
    printf("Enter the Number :");
    scanf("%d",&n);
    
    for(a=1; a<=n; a++){
		
		printf("%d\t",a);
		
		a=a++;
	}
	


    return 0;
}