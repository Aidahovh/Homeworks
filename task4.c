#include <stdio.h>

int main() {

    int number = 50;
    int *ptr = &number;
    int **ptr2 = &ptr;
    printf("Value using pointer: %d\n", *ptr);
    printf("Value using double pointer: %d\n", **ptr2);

    return 0;
}
