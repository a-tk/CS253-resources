#include <stdio.h>
#include <stdlib.h>


int main(void) {

    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;


    while ((linelen = getline(&line, &linecap, stdin))) {
        for (int i = 0; i < linelen; i++) {
            putchar(line[i]);
        }
    }
    return 0;
}