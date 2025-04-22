/* lab/files-processes/fork-hello-world.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void print_message_function(char *ptr);

int main(void) {
    pid_t pid;
    char *message1 = "Goodbye";
    char *message2 = "World";

    printf("before fork\n");
    if ((pid = fork()) < 0) {
        perror("fork error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) {
        /* first child */
        print_message_function(message1);
        sleep(2);
        exit(0);
    }
    printf("Created child: pid=%d\n", pid);
    
    /* parent continues and creates another child */
    if ((pid = fork()) < 0) {
        perror("fork error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) {
        /* second child */
        print_message_function(message2);
        sleep(2);
        exit(0);
    }
    printf("Created child: pid=%d\n", pid); /* parent */
    sleep(2);
    exit(0);
}

void print_message_function(char *message) {
    printf("%s ", message);
}