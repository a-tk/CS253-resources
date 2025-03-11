#include <stdio.h>

typedef struct {
    char x;
    long y;
    int z;
} S;

int main(void) {

    printf("sizeof(S) is %lu\n", sizeof(S));
    printf("sizeof(int) is %lu\n", sizeof(int));
    printf("sizeof(long) is %lu\n", sizeof(long));

    return 0;
}