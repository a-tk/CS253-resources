#include <stdio.h>

#define SIZE 10

int main(void) {

    int A[8];
    long B[SIZE];
    char C[] = {'h', 'e', 'l', 'l', 'o'};
    char D[] = "hello";

    printf("sizeof(A) = %lu\n", sizeof(A));
    printf("sizeof(B) = %lu\n", sizeof(B));
    printf("sizeof(C) = %lu\n", sizeof(C));
    printf("sizeof(D) = %lu\n", sizeof(D));

    return 0;

}