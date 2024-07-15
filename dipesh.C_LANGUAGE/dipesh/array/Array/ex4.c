#include <stdio.h>
int main() 
{
    int n,i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n <= 0)
	{
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++)
	{
        if (i % 2 == 0)
		{
           oddSum += arr[i];
        } else
			{
            evenSum += arr[i];
			}
	}
	
	

    printf("Sum of even-positioned elements: %d\n", evenSum);
    printf("Sum of odd-positioned elements: %d\n", oddSum);

	

    return 0;
}



/*

Enter the size of the array: 10

Enter 10 elements:
					1
					2
					3
					4
					5
					6
					7
					8
					9
					10

Sum of even-positioned elements: 30
Sum of odd-positioned elements: 25


*/
