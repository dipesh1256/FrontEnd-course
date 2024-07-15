#include<stdio.h>

int main () {
 int a,b,c;

    printf("Enter the value of A :");
    scanf("%d",&a);

    printf("Enter the value of  B:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

      printf("Value of a : %d\n",a);
      printf("value of b : %d",b);

return 0 ;

}

