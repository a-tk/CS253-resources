//compile with flags -Wall -Wextra
#include <stdio.h>

int main(void) {
    unsigned int a = -25;
    if (a < 0) {
        printf("unsigned int is less than zero?\n");
    }

    return 0;
}