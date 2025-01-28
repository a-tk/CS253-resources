#include <stdio.h>

void label(void) {
    static int count = 0; // Persistent
    count++;
    printf("label-%d\n", count);
}

int main(void) {
    label();
    label();
    label();
    return 0;
}