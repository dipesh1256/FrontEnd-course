#include<stdio.h>

int print(){
    char i;

	 for (char i='A'; i <= 'Z'; ++i) {
        printf("%c  ", i);
    }
    return i;
}

int main (){

	int i=print();
//	printf("\nhet lathiya");
	

	return 0;
}