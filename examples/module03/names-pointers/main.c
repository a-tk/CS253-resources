#include <stdio.h>

void update(int a) {
    a = 4;
}

void updatePointer(int *a) {
    *a = 4;
}

int main(void) {
    int x = 14;
    printf("x is located at %p\n", &x);
    printf("x has value %d\n", x);

    update(x);
    printf("after update. x has value %d\n", x);

    updatePointer(&x);
    printf("after updatePointer. x has value %d\n", x);

    return 0;
}