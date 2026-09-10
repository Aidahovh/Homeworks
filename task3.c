#include <stdio.h>
void swap(int *a, int *b) {

    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main() {

    int x = 10;
    int y = 20;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("After swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
