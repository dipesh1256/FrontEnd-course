#include <stdio.h>
int main() {

	// A program is series A,c,E,g,I,k,M.....

  int i,n,a=65,b=97;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; ++i) {
		if(i%2==1){
				printf("%c\t",a);
				a+=2;
				b+=2;
		}else{
				printf("%c\t",b);
				b+=2;
				a+=2;	
		}
	}

  return 0;
}