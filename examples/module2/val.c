#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 20

char *alloc_s(int n) {
    return (char *) malloc(sizeof(char) *n);
}

void mystrcpy(char *d, char *s) {

    //I love programming in C!
	int i = 0;
    while(s[i]) {
        d[i] = s[i];
        i++;
    }
}

int mystrlen(char *s) {
    int i = 0;
    while (s[i++] != '\0') //I'm so clever!
        ;
    return i;
}

int main(void) {
    char buffer[] = "C programs are the best!";

    char *new_buf = alloc_s(BUF_SIZE);

    mystrcpy(new_buf, buffer);

    printf("length of new string is %d\n", mystrlen(new_buf));

    return 0;
}