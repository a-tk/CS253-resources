/* lab/files-processes/fork-child-grandchild.c */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void) {
    pid_t pid;

    printf("original process, pid = %d\n", getpid());
    
    if ((pid = fork()) < 0)
        err_sys("fork error");
    else if (pid == 0)
    { /* child */
        printf("child = %d, parent = %d\n", getpid(), getppid());
        if ((pid = fork()) < 0)
            err_sys("fork error");
        else if (pid == 0)
        { /* grandchild */
            printf("grandchild = %d, parent = %d\n", getpid(), getppid());
            exit(0);
        }
        /* child waits for the grandchild */
        if (waitpid(pid, NULL, 0) != pid)
            err_sys("waitpid error");
        exit(0); /* the child can now exit */
    }
    /* original process waits for its child to finish */
    if (waitpid(pid, NULL, 0) != pid)
        err_sys("waitpid error");
    exit(0);
}