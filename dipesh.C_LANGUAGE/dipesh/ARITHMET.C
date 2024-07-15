 #include <stdio.h>

int main ()
{
int maths,phy,eco,eng,stat,total,per;


printf("enter the marks of maths :");
scanf("%d,&maths");

printf("enter the marks of phy :");
scanf("%d,&phy");

printf("enter the marks of eco :");
scanf("%d,&eco");

printf("enter the marks of eng :");
scanf("%d&,eng");

printf("enter the marks of stat :");
scanf("%d,stat");


total=maths+phy+eco+eng+stat;
printf("total marks :%d",total);

per=(total*100/500);
printf("percentage %d",per);

return 0;


}

