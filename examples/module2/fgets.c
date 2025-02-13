#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER 16


int main(void) {

    char buffer[MAX_BUFFER];

    while (fgets(buffer, MAX_BUFFER, stdin) != NULL) {
        printf("%s", buffer);
    }
    return 0;
}