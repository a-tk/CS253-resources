#include <stdio.h>
#include <stdlib.h>

unsigned int getbits(unsigned int x, int p, int n) {
   return (x >> (p + 1 - n)) & ~(~0U << n);
}


int main(int argc, char *argv[]) {

    if (argc != 4) {
        printf("Usage: %s <x> <p> <n>\n", argv[0]);
        return -1;
    }

    int x = atoi(argv[1]);
    int p = atoi(argv[2]);
    int n = atoi(argv[3]);


    printf("%#x\n", getbits(x, p, n));
    return 0;
}