#include<stdio.h>
#define n 6

void display(int arr[]){

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

}

void min(){}

void max (){}


int main (){

    int a[n];
    for(int i=0; i<n; i++)
    {
        printf(" Enter value :");
        scanf("%d",&a[i]);
    }
    display(a);


}