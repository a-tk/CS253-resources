/* lab/files-processes/simple-shell.c, need error.c and ourhdr.h to compile */
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAXLINE 256

int main(void)
{
    char buf[MAXLINE];
    pid_t pid;
    int status;
    printf("%% "); /* print prompt (printf requires %% to print %) */
    while (fgets(buf, MAXLINE, stdin) != NULL)
    {
        buf[strlen(buf) - 1] = 0; /* replace newline with null */
        if ((pid = fork()) < 0)
            err_sys("fork error");
        else if (pid == 0)
        { /* child */
            execlp(buf, buf, (char *)0);
            err_ret("couldn't execute: %s", buf);
            exit(127);
        }
        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0)
            err_sys("waitpid error");
        printf("%% ");
    }
    exit(0);
}