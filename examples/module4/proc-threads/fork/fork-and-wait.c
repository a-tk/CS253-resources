/* fork-and-wait.c */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void childs_play(void), err_sys(char *msg);

int main(void) {
    pid_t pid;
    if ((pid = fork()) < 0)
        err_sys("fork error");
    else if (pid == 0) { 
        /* child */
        childs_play();
        exit(0);
    }

    /* parent continues concurrently with child */ 
    printf("Created child with pid %d\n", pid);

    /* wait for normal termination of child process */
    if (waitpid(pid, NULL, 0) != pid)
        err_sys("waitpid error");
    
    printf("Shoo away, its 5AM!!\n");
    exit(0);
}

void childs_play() { 
    printf("Hey, I need some one to play with!\n");
    sleep(2);
}

void err_sys(char *msg){

    fprintf(stderr, msg);
    fflush(NULL); /* flush all output streams */
    exit(1);      /* exit abnormally */
}