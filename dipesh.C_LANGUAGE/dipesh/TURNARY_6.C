#include<stdio.h>
#include<conio.h>

int main()
{
int a = 33,b=20,c=35,ans;
clrscr();

ans = (a<b && a<c)?a:(b<a && b,c)?b:c;
printf("%d",ans);

return 0;

}




