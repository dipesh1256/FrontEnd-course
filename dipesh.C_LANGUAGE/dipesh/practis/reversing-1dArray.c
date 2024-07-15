#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Reversing the array
    for (int i = 0, j = 4; i < j; i++, j--) {
        // Swapping elements
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Displaying the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
