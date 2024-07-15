// lenear search 

#include<stdio.h>
#include<stdlib.h>
#define n 10

int linearSearch(int*array,int size,int key)
{
    for(int i=0; i<size; i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[n],i;
    for(i=0; i<n; i++)
    {
        array[i]=rand()%50;
        printf("%d\t",array[i]);
    } 
int key;
printf("\nEnter the search number :");
scanf("%d",&key);

int size = sizeof(array) / sizeof(array[0]);

int index = linearSearch(array , size , key);

if (index == -1)
{
    printf("not present in the array.");

}
else{
    printf("present at array[%d].",index);
}

return 0;
}