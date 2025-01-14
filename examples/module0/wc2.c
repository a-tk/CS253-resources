#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int c;
    long nl;

    nl = 0;

    while ((c =getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }
    }

    printf("%ld\n", nl);
    return 0;
}