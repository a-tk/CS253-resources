#include <stdlib.h>

/* use the debugger to inspect this array */
int main(void) {

    int **X;
    int n = 4; // will produce a 4x4 2d array
    X = (int **)malloc(sizeof(int *) * n);

    for (int i = 0; i < n; i++) {
        X[i] = (int *) malloc(sizeof(int) * n);
    }

    // init
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            X[i][j] = i;
        }
    }

    // free
    for (int i = 0; i < n; i++) {
        free(X[i]);
    }
    free(X);

    return 0;

}