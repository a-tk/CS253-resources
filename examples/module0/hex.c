#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <int>\n", argv[0]);
        return -1;
    }
    int num = atoi(argv[1]);
    printf("entered %d\n", num);
    printf("\toctal: %#o\n", num);
    printf("\thexadecimal: %#x\n", num);

    return 0;
}