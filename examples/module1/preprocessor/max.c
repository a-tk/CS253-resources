// compile with gcc -E max.c -o max.e
#include <stdio.h>

#define max(a, b) ((a)>(b)? (a) : (b))

int main(void) {
    int x = 4, y = 5;

    printf("Max int is %d\n", max(x, y));
}