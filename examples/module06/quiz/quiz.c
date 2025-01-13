#include <stdio.h>
#include <stdlib.h>

int *A;
void foo(int *bar, int len) {
    int i;
    A = malloc(sizeof(int) * len);
    for (i = 0; i < len; i++) bar[i] = i;
    for (i = 0; i < len; i++) A[i] = i;
}

int main(int argc, char **argv) {
    int length = 10, i;
    int *bar[length];

    foo(&bar[0], length);

    free(A);
    return 0;
}