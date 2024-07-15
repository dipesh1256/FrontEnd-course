#include<stdio.h>

int main ()
{
float rate,qty,bamt,nbill,amt,dis,gst;

printf("\nEnter the ammount of the rate :");
scanf("%f",&rate);

printf("\nEnter the buy quntity :");
scanf("%f",&qty);

amt=rate*qty;
dis=amt*7/100;
bamt=amt-dis;
gst=bamt*18/100;
nbill=bamt+gst;

printf("rate   qty.   amt   dis.7%  billamt   gst 18%   netbill");
printf("\n %.1f %.2f  %.2f  %.2f    %.2f      %.2f      %.2f",rate,qty,amt,dis,bamt,gst,nbill);

return 0;

}