#include <stdio.h>

int main()
{
    int unit;
    float bill;
    
    printf("enter your bill unit:");
    scanf("%d",&unit);

    if(unit<100)
        {
        bill=(unit*0.60); // 100/60 = 0.60
    }
    else if(unit<=300)
        {
            bill=(60+((unit-100)*0.80));  // 100/80 = 0.80
        }
    else {
            bill=(220+((unit-300)*0.90));  // 100/90 = 0.90  // 60(100*0.60)+160(200*0.80) = 220 
    }
    
    
    if(bill<=50){

        bill=50;
        printf("%0.2f\n",bill);

    }else if(bill>300){

        bill+=bill*0.15;
        printf("%0.2f\n",bill);

    }else{

        printf("%0.2f\n",bill);

    }
    
    return 0;
}