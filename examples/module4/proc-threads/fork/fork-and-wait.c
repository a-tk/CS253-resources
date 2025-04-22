/* fork-and-wait.c */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void childs_play(void);

int main(void) {
    pid_t pid;
    if ((pid = fork()) < 0) {
        perror("fork error");
        exit(EXIT_FAILURE);
    } else if (pid == 0) { 
        /* child */
        childs_play();
        exit(0);
    }

    /* parent continues concurrently with child */ 
    printf("Created child with pid %d\n", pid);

    /* wait for normal termination of child process */
    if (waitpid(pid, NULL, 0) != pid) {
        perror("waitpid error");
        exit(EXIT_FAILURE);
    } 
    
    printf("Shoo away, its 5AM!!\n");
    exit(0);
}

void childs_play(void) { 
    printf("Hey, I need some one to play with!\n");
    sleep(2);
}