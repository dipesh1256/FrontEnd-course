#include <stdio.h>

int printNumbers() {
    int i;
    for (i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int main() {
    printNumbers();
    return 0;
}