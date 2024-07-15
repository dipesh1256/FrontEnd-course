#include<stdio.h> 

 struct Student {
    int rate,amt,qty,billamt,netbill,serialno;
    char pro_name[50];
    float dis,gst;
 };

 int main (){

    struct Student a[5];
    int i;

    for(int i=0; i<2; i++){

        printf("Enter Serial No : ");
        scanf("%d",&a[i].serialno);

        printf("Enter Product Name : ");
        scanf("%s",&a[i].pro_name);

        printf("Enter Rate : ");
        scanf("%d",&a[i].rate);

        printf("Enter Quantity : ");
        scanf("%d",&a[i].qty);

        printf("\n");

    } 

    printf("\nSerial No\tProduct Name\tRate\tQuantity\tAmount\tDiscount\tBill Amount\tGST\tNet Bill");

    for(i=0; i<2; i++){

        a[i].amt=a[i].rate*a[i].qty;
        a[i].dis=a[i].amt*0.05;
        a[i].billamt=a[i].amt-a[i].dis;
        a[i].gst=a[i].billamt*0.18;
        a[i].netbill=a[i].billamt+a[i].gst;

        

        // printf("Ammount :%d\n",a[i].amt);
        // printf("Discount :%0.2f\n",a[i].dis);
        // printf("Bill Ammount :%d\n",a[i].billamt);
        // printf("GST Ammount :%0.2f\n",a[i].gst);
        // printf("Net Bill Ammount :%d\n",a[i].netbill);


        printf("\n");
        
        printf("\n%d\t\t%s\t\t%d\t\t%d\t%d\t\t%0.2f\t%d\t%0.2f\t\t%d", 
        a[i].serialno,a[i].pro_name,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);

    }

    return 0;
 }


