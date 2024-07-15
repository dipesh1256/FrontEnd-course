#include <stdio.h>

void printNumbers() {
    int i;
    for (i = 51; i <= 99; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    printNumbers();
    return 0;
}