#include<stdio.h>


int main()
{
char start,end;



printf("enter the starting character :");
scanf("%c",& start);

printf("enter the ending character :");
scanf("%c",& end);

printf("the english alphabet frome %c is", start,end);

for(char c=start;  c<=end; c++){
    printf("%c",c);
	}
	
	return 0;
	
}