#include <stdio.h>
int main() {

    char str[] = "Hello";
    char *ptr = str;
    char *countPtr = str;
    int count = 0;

    printf("String using pointer: ");

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    printf("\n");

    while (*countPtr != '\0') {
        count++;
        countPtr++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}
