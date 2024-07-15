#include<stdio.h>
//#define n 5

int n;

void num(int arr[])
{
    int i;
    printf("The Number is :");
    for(i=0;i<n;i++)
    {
        printf(" %d ", arr[i]);
    }
}

int max(int arr[])
{
    int i,max;
    max = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max =arr[i];
        }
    }
    return max;
}

int min(int arr[])
{
    int i,min;
    min = arr[0];

    for(i=1; i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    printf("Enter The Size if Array:");
    scanf("%d",&n);

    int a[n];

    

    for(int i=0;i<n;i++)
    {
        printf("Enter The Number:");
        scanf("%d",&a[i]);
    }
    num(a);
    printf("\n");

    max(a);
    printf("Maximum Number is = %d\n",max(a));

    min(a);
    printf("Minimum number is  = %d\n",min(a));

    return 0;
}


/*

Enter The Value:1
Enter The Value:2
Enter The Value:3
Enter The Value:4
Enter The Value:5
1 2 3 4 5
Maximum = 5
Minimum = 1

*Thank you for your business! We look forward to working with you again. */    