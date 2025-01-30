#include <stdio.h>
#include <stdlib.h>

unsigned char setBit(unsigned char ch, int i) {
    unsigned char mask = 1 << i;
    return mask | ch;
}


int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: %s <x> <i>\n", argv[0]);
        return -1;
    }

    int x = atoi(argv[1]);
    int i = atoi(argv[2]);


    printf("%#hhx\n", setBit(x, i));
    return 0;
}