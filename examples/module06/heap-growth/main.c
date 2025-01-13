#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 64

int main(void) {

    int *intArray = (int *)malloc(ARRAY_SIZE * sizeof(int));

    // initialize it
    int i;
    for (i = 0; i < ARRAY_SIZE; i++) {
        intArray[i] = i;
    }

    //print it
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    //uncomment this and try again:
    // for (i = 0;; i++) {
    //     printf("i = %d\n", i);
    //     intArray[i] = i;
    // }
    
    return 0;
}