#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * forks a new child and execs a command
 */
int main(int argc, char **argv) {

    if (argc < 2) {
        printf("Usage: %s <cmd>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    pid_t pid;
    if ((pid = fork()) < 0) {
        perror("fork error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) { /* child */
        execlp(argv[1], argv[1], 0);
        perror("exec failed");
        exit(1);
    }
    printf("Created child with pid %d\n", pid);
    /* parent continues concurrently with child */
    /* wait for normal termination of child process */
    if (waitpid(pid, NULL, 0) != pid) {
        perror("waitpid error");
        exit(EXIT_FAILURE);
    }
    printf("Child finished, parent exiting\n");
    exit(0);
}