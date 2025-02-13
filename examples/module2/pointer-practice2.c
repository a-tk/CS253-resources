#include <stdio.h>

int main(void) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pa = &a[0];

    pa += 1;
    for (int i = 0; i < 10; i++) {
        printf("%d ", pa[i]);
    }

    pa = a;
    pa--;

    printf("%d ", *pa);
    
    return 0;

}