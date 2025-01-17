#include <stdio.h>

#define MAX_LINE 1024

int main(void) {
    char buffer[1024] = {};

    while (fgets(buffer, MAX_LINE, stdin) != NULL) {
        //process each buffer here
        
        printf("%s", buffer);
    }
    return 0;
}