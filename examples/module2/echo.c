#include <stdio.h>
#include <stdlib.h>


int main(void) {

    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;


    while ((linelen = getline(&line, &linecap, stdin))) {
        fwrite(line, linelen, 1, stdout);
    }
    return 0;
}