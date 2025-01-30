#include <stdio.h>
#include <stdlib.h>

/* Right shifts x by n */
int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage: %s <x> <n>\n", argv[0]);
        return -1;
    }

    int x = atoi(argv[1]);
    int n = atoi(argv[2]);

    //casting is there to limit the printed size for easier examples.
    printf("%hhd\t%#hhx\n", (char) (x >> n), (unsigned char) (x >> n));
    return 0;
}