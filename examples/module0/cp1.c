#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c; //int? 

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}