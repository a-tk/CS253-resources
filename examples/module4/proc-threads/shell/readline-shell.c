#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

/**
 * uses GNU readline library for more features, like history.
 */
int main(void) {
    pid_t pid;
    int status;

    char *line;
    char *prompt = "% ";
    using_history(); /* enable readline history mechanism */
    while ((line = readline(prompt))) {

        line[strlen(line) - 1] = 0; /* replace newline with null */
        add_history(line); /* add current line to history list */

        if ((pid = fork()) < 0){
            perror("fork error");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0) { /* child */
            execlp(line, line, (char *)0);
            perror("exec failed");
            exit(EXIT_FAILURE);
        }
        
        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0) {
            perror("waitpid error");
            exit(EXIT_FAILURE);
        }

        free(line);
    }

    exit(0);
}