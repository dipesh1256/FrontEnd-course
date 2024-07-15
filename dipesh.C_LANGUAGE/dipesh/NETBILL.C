#include<stdio.h>
#include<conio.h>

//net bill program

int main()
{

float rate,qty,bamt,nbill,amt,dis,gst;
   clrscr();
printf("\n enter the ammount of the rate :");
scanf("%f",&rate);

printf("\n enter the buy quntity :");
scanf("%f",&qty);

amt=rate*qty;
dis=amt*7/100;
bamt=amt-dis;
gst=bamt*18/100;
nbill=bamt+gst;

printf("rate     qty.    amt.    dis.7     billamt     gst%18");
printf("\n %.1f  %.2f   %.2f   %.2f      %.2f        %2.f");

return 0;
}