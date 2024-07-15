#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = " World";

    // String length function
    int length = strlen(str1);
    printf("Length of \"%s\": %d\n", str1, length);

    // String concatenation function
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
