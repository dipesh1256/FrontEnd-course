#include<stdio.h>

  int main()
  {
  int a,b;

  printf("enter the value of a :");
  scanf("%d",&a);

  printf("enter the value of b :");
  scanf("%d",&b);

  a=a*b;
  b=a/b;
  a=a/b;

  printf("the value of a = %d",a);
  printf("the value of b = %d",b);

  return 0;

  }