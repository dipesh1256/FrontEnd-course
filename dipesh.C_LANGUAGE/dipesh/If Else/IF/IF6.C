#include<stdio .h>     
#include<conio.h>    
   
int main (){       
                                             
 int unit;              
 float bill;             
 
  clrscr();        

  printf("Enter Your reading bill Units:");                          
  scanf("%d",&unit);
   
    if(unit<100){
    bill=(unit*0.60);
    } 
	
	
    if(unit>100 && unit<=300){ 
    bill=(60+((unit-100)*0.80)); 
    }

    if(unit>300){ 
    bill=(220+((unit-300)*0.90)); 
    }                                                                                                                                                       

    if(bill<=50){
    bill=50;        
    printf("%0.2f\n",bill); 
    }

    if(bill>300){
    bill=(bill+bill*0.15); 
    printf("%0.2f\n",bill); 
    }
 
    if(bill>50 && bill<300){
    printf("%0.2f\n",bill);
    }    

 //   printf("your reading bill Amount :%0.2f",bill);
    
 return 0;

}