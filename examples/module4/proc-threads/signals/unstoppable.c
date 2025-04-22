#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void handler(int x) {
    char *sig;
    if (x == SIGTSTP) sig = "TSTP";
    if (x == SIGINT)  sig = "INT";
    if (x == SIGQUIT)  sig = "QUIT";

    printf("Can't %s this!\n", sig);
}

/**
 * uses a signal handler to avoid being SIGTSTP'd or SIGINT'd
 */
int main(void) {

    printf("pid = %d\n", getpid());

    if (signal(SIGTSTP, handler) == SIG_ERR) {
        perror("signal");
        exit(EXIT_FAILURE);
    }
    if (signal(SIGINT, handler) == SIG_ERR) {
        perror("signal");
        exit(EXIT_FAILURE);
    }
    if (signal(SIGQUIT, handler) == SIG_ERR) {
        perror("signal");
        exit(EXIT_FAILURE);
    }

    for (;;) sleep(10);

    return 0;
}