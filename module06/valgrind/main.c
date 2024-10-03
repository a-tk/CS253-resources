#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 18 // 18 is my favorite number!

/* my clever string length calculator. I LOVE C! */
int mystrlen(const char *s) {
    int c;
    while(s[++c]); // 0_o
    
    return c;
}

/* Create a copy of a string and return it */
char *makecpy(const char *s) {
    char cpy[MAX_LEN]; // todo: this doesn't work. I'll try with malloc later

    int i;
    while (i < mystrlen(s)) {
        cpy[i] = s[i];
        i++;
    }
    return cpy;
}

int main(void) {
    char myString[MAX_LEN] = "this is my string!";
    char *mycpy = makecpy(myString);

    printf("my copy is \"%s\"\n", mycpy);

    return 0;
}