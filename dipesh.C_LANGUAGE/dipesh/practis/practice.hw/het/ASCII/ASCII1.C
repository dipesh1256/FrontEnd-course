#include<stdio.h>
#include<conio.h>
int main(){

  char a;

  clrscr();

  printf("Enter the Character:");
  scanf("%c",&a);

  if(a<123 && a>96){printf("%c\n",a-32);}

  else{
  if(a<89 && a>64){printf("%c\n",a+32);}}

return 0;

}