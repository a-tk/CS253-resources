#include <stdio.h>
#include <stdlib.h>

unsigned char isBitSet(unsigned char ch, int i) {
    unsigned char mask = 1 << i;
    return mask & ch;
}


int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: %s <x> <i>\n", argv[0]);
        return -1;
    }

    int x = atoi(argv[1]);
    int i = atoi(argv[2]);


    if (isBitSet(x, i)) {
        printf("True!\n");
    } else {
        printf("False!\n");
    }
    return 0;
}