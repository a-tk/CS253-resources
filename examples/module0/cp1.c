/* cp program using character input and output */
/* use like ./cp1 < file1 > file1.copy */
/* compile like gcc -Wall -o cp1 cp1.c */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c; //int? 

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}