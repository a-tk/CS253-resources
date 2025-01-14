#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c;

    c = getchar();
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}