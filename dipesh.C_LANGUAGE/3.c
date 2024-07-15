#include <stdio.h>

int printNumbers() {
    int i;
    for (i = 51; i <= 99; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int main() {
    printNumbers();
    return 0;
}