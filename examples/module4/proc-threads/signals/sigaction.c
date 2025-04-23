#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void segmentation_handler(int x) {
    printf("Caught segfault! signal number %d\n", x);
    sleep(1);
    // exit(1);
}

int main(void) {
    struct sigaction sa = {0};
    sa.sa_handler = segmentation_handler;
    sigemptyset(&sa.sa_mask);         // Don't block any signals during handler
    sa.sa_flags = 0;                  // No special flags

    if (sigaction(SIGSEGV, &sa, NULL) == -1) {
        perror("sigaction");
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
