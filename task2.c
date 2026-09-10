#include <stdio.h>
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int *ptr = numbers;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    };
    printf("\n");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) + 5;
    };
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    };
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    };
    printf("\n");
    return 0;
}
