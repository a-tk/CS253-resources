#include <stdio.h>

#include "helpers.h"

int addition(int a, int b) {
    int c = a + -b;

    return c;
}

int main(void) {

    int numberOne;
    int numberTwo;

    printf("Enter a number:\n");
    scanf("%d", &numberOne);

    printf("Enter another number:\n");
    scanf("%d", &numberTwo);

    int added = addition(numberOne, numberOne);

    printf("The numbers added together are: %d\n", added);

    int multiplied = multiply(numberOne, numberTwo);

    printf("The numbers multiplied together are: %d\n", multiplied);

    return 0;
}