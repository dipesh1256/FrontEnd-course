#include <stdio.h>
int main() {

	// fibonacci series 0,1,1,3,5,8,13,21....
	 
  int i, n,a=0, b= 1,c;

  printf("Enter the number: ");
  scanf("%d", &n);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", c);
    a = b;
    b = c;
    c=a+b;
  }

  return 0;
}