#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrcpy(char source[]) {
    int n = strlen(source);
    
    char *copy = (char *) malloc(sizeof(char) * n);

    strcpy(copy, source);

    return copy;

}

int main(void) {

    char *s = "Hello!";

    char *d = mystrcpy(s);

    printf("copy is: %s\n", d);

    return 0;
}