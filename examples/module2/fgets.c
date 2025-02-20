#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER 1024


int main(void) {

    char buffer[MAX_BUFFER];
    int n = 0;

    while (fgets(buffer, MAX_BUFFER, stdin) != NULL) {
        printf("%s", buffer);
        n++;
    }

    printf("fgets called %d times\n", n);
    return 0;
}