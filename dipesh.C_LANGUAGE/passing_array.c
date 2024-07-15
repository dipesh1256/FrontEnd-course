#include<stdio.h>
#define n 8

void display(int arr[1])                
{
   for(int i=0; i<n; i++){
    printf("%d  ",arr[i]);
   }

}

int main()
{
    int a[n];
    for(int i=0; i<n; i++){  
    printf("enter val :");        
    scanf("%d",&a[i]);
    }
      display(a);    

}