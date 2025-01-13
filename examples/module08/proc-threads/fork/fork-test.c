#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Calls fork() n times. If n is greater than 5, does nothing. */
/* DO NOT execute with values of n greater than 5. This can be a violation of */
/* computer lab rules and you can be removed from the system. */
/* YOU HAVE BEEN WARNED. */
int main(int argc, char **argv) {

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <n>\n", argv[0]);
        exit(-1);
    }

    int n = atoi(argv[1]);

    if (n > 5) {
        fprintf(stderr, "WARNING: do not run with high values of n\n");
        exit(-1);
    }

    for (int i = 0; i < n; i ++) {
        if (fork() == 0) printf("in a new process!\n");
        sleep(1); //sleep for 1
    }

    return 0;

}