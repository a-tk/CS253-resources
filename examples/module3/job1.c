#include <stdio.h>

int main(void) {

    struct job {
        int pid;
        char *name;
    } j;

    j.name = "my name";
    j.pid = 1234;


    struct job *p = &j;

    printf("%d\n", ++p->pid);
    p = &j; //reset
    printf("%d\n", (++p)->pid);
    p = &j; //reset
    printf("%d\n", (p++)->pid);

    p = &j; //reset

    printf("%c\n", *p->name);
    printf("%c\n", *p->name++);
    //printf("%c\n", (*p->name)++);
    printf("%c\n", *p++->name);

    return 0;
}