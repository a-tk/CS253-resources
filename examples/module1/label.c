#include <stdio.h>

void label() {
    static int count = 0; // Persistent
    count++;
    printf("label-%d\n", count);
}

int main() {
    label();
    label();
    label();
    return 0;
}