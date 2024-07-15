#include<stdio.h>

int main()
{

int i,j;

for(i=25; i<=29; i++) {

for(j=i; j<=25; j--) {
printf("%c", j );
}

printf("\n");
}

return 0;
}