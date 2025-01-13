#include <stdio.h>

#define FIRST
int main(void) {
    /* First version */
    #ifdef FIRST

    long nc;

    nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    printf("%ld\n", nc);

    #else
    /* Second version */

    long nc;

    for (nc = 0; getchar() != EOF; ++nc) {}

    printf("%ld\n", nc);

    #endif
}