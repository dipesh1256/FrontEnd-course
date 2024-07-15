// Array pass in to Function as argument 

#include<stdio.h>
#define n 8 

void display(int arr[]){

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


}

int main (){

    int a[n];
    for(int i=0; i<n; i++)
    {
        printf(" Enter value :");
        scanf("%d",&a[i]);
    }
    display(a);


}


// maximum no. and minimum no.
/*
10  
20  30
30  50 
40  70
50  90 
60  110
*/