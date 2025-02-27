#include <stdio.h>

int main(void) {

    int secret_number = 42;

    printf("address of secret_number is %p\n", &secret_number);

    getchar();

    return 0;
}