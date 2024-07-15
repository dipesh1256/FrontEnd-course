#include<stdio.h>

 int main()
 {

 int maths,stat,eco,sum,pe ur;

 printf("enter the marks of maths :");
 scanf("%d",&maths);

 printf("enter the marks of stat :");
 scanf("%d",&stat);

 printf("enter the marks of eco :");
 scanf("%d",&eco);

 sum=maths+eco+stat;
 per=sum*100/300;

 printf("total marks of : %d ",sum);
 printf("percentage : %d\n",per);

 return 0;

 }
