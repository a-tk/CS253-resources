#include <stdio.h>

#define MAX_LINE 1024

/* sep changes every space to a newline */
int main(void) {
    char buffer[MAX_LINE] = {};

    while (fgets(buffer, MAX_LINE, stdin) != NULL) {
        for(int i = 0; i < MAX_LINE; i++) {
            if (buffer[i] == ' ') {
                buffer[i] == '\n';
            }
        }
        
        printf("%s", buffer);
    }
    return 0;
}