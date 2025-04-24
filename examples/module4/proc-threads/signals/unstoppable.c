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
    signal(x, handler);
}

/**
 * uses a signal handler to avoid being SIGTSTP'd or SIGINT'd
 */
int main(void) {

    printf("pid = %d\n", getpid());

    signal(SIGTSTP, handler);
    signal(SIGINT, handler);
    signal(SIGQUIT, handler);

    for (;;) sleep(10);

    return 0;
}