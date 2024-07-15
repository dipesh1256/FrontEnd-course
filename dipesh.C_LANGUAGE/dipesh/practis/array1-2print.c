#include <stdio.h>

int main() {
    // Define the dimensions of the 2D arrays
    int rows = 3;
    int cols = 4;

    // Initialize and populate array1
    int array1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Initialize and populate array2
    int array2[3][4] = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22}
    };

    // Print the contents of array1
    printf("Array 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", array1[i][j]);
        }
        printf("\n");
    }

    // Print a separator line
    printf("\n");

    // Print the contents of array2
    printf("Array 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
