#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *A;
    void *ptr;
    A = (int *) malloc(sizeof(int) * 10);
    ptr = A;


    A[2] = 42;

    int i = 2;

    printf("%d\n", *(A + i));
    printf("%d\n", *(ptr + i));
    printf("%d\n", *(int *)(ptr + i));
    printf("%d\n", *((int *)ptr + i));
    printf("%d\n", *(ptr + sizeof(int)*i));

    free(A);
    return 0;
}