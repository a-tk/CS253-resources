#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void segmentation_handler(int x) {
    printf("Caught segfault! signal number %d\n", x);
    exit(1);
}

/**
 * uses a signal handler to avoid being terminated by the OS for segmentation violation
 */
int main(void) {

    void (*prev)(int) = signal(11, segmentation_handler); //prev stores a copy of the old handler

    if (prev == SIG_ERR) {
        perror("signal");
        exit(EXIT_FAILURE);
    }

    typedef struct{
        int a;
    } A;

    void *bad = NULL;

    A* mystruct = (A*) bad;

    printf("mystruct->a = %d\n", mystruct->a);

    return 0;
}