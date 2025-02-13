#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <size>\n", argv[0]);
        return -1;
    }

    const int array_size = atoi(argv[1]);
    int A[array_size];

    printf("sizeof(A) = %lu\n", sizeof(A));

    return 0;

}