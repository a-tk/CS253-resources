#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void segmentation_handler(int x) {
    printf("Caught segfault! signal number %d\n", x);
    sleep(1);
    //signal(x, segmentation_handler);
    //exit(1);

    // you can also explore different behavior by compiling with -std=c99
}

/**
 * uses a signal handler to avoid being terminated by the OS for segmentation violation
 */
int main(void) {

    signal(11, segmentation_handler);

    typedef struct{
        int a;
    } A;

    void *bad = NULL;

    A* mystruct = (A*) bad;

    printf("mystruct->a = %d\n", mystruct->a);

    return 0;
}