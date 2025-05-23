#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void) {
    pid_t pid;
    int status;
    printf("%% "); /* print prompt (printf requires %% to print %) */

    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;
    while ((linelen = getline(&line, &linecap, stdin)) > 0) {

        line[strlen(line) - 1] = 0; /* replace newline with null */
        if ((pid = fork()) < 0){
            perror("fork error");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        { /* child */
            execlp(line, line, (char *)0);
            perror("exec failed");
            exit(EXIT_FAILURE);
        }
        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0) {
            perror("waitpid error");
            exit(EXIT_FAILURE);
        }
        printf("%% ");
    }
    free(line);
    exit(0);
}