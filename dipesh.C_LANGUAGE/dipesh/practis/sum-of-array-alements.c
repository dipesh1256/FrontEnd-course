#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Calculating the sum of array elements
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Displaying the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
