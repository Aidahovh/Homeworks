#include <stdio.h>
int main() {
    int number = 10;
    int *ptr = &number;
    printf("Address of a number:  %p \n", ptr);
    printf("Address of a number: %p \n", &number);
    *ptr = 20;
    printf("New number: %d \n", number);


    return 0;
}
