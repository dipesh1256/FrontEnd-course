#include<stdio.h>
#include<conio.h>

int main()
{
	 clrscr();
    int a=5,b=10;

  printf("a+b is %d",a+=b);

  printf("a-b is %d",a=a-b);

  printf("a*=b is %d",a=a-b);

  printf("b/=a is %d",b=b/a);

  printf("ans is %d",a%=b);

  return 0;
  }