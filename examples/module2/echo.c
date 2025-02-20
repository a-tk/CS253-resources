#define _GNU_SOURCE // for getline
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strlen


int main(void) {

    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;


    while ((linelen = getline(&line, &linecap, stdin)) != -1) {
        for (int i = 0; i < linelen; i++) {
            putchar(line[i]); //print the line one character at a time
        }
        printf("linelen = %ld\n", linelen);
        printf("strlen(line) = %ld\n", strlen(line));
    }

    free(line);
    return 0;
}