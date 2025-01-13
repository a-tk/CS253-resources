#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *heapArray = (char *) malloc(10 * sizeof(char));

    int i;
    for (i = 0; i <= 10; i++) {
        heapArray[i] = '0' + i;
    }

    printf("%s\n", heapArray);

    return 0;

}