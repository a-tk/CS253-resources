#include <stdio.h>
#include <stdlib.h>

#include "square.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>", argv[0]);
        return 0;
    }

    int arg = atoi(argv[1]);

    printf("the square of 4 is %d\n", square(4));

    return 0;

}