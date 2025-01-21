#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <8 bit number (-128 to 127)>\n", argv[0]);
        return -1;
    }

    int input = atoi(argv[1]);

    if (input > 127 || input < -128) {
        fprintf(stderr, "Usage: %s <8 bit number (-128 to 127)>\n", argv[0]);
        return -2;
    }

    unsigned char byte = (unsigned char) input;

    printf("entered %d\n", input);
    printf("unsigned value as a byte: %d\n", byte);

    return 0;
}