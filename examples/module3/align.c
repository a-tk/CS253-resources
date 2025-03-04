#include <stdio.h>

typedef struct {
    int x;
    long y;
} S;

int main(void) {

    printf("sizeof(S) is %lu\n", sizeof(S));

    return 0;
}