#include <stdio.h>

#include "helpers.h"

int addition(int a, int b) {
    int c = a + -b;

    return c;
}

int main(void) {

    int numberOne = 4;
    int numberTwo = 10;

    int added = addition(numberOne, numberOne);

    printf("The numbers added together are: %d\n", added);

    int multiplied = multiply(numberOne, numberTwo);

    printf("The numbers multiplied together are: %d\n", multiplied);

    return 0;
}