#include <stdio.h>

int main() {
    int arr[5] = {1, 7, 3, 4, 2};
    int max = arr[0], min = arr[0];

    // Finding maximum and minimum
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Displaying the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
