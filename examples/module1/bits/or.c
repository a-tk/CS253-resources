#include <stdio.h>
#include <stdlib.h>

/* Computes x | y */
int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: %s <x> <y>\n", argv[0]);
        return -1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("%#hhx\n", (unsigned char)(x & y));
    return 0;
}