#include <stdio.h>

int fun(int i)
{

  while(i>0){

    printf("%d\n",i);

    i--;

  }

    return 0;

}


int main (){

int i;



printf("Enter any number to find reverse: ");
scanf("%d",&i);

fun(i);
    return 0;
}