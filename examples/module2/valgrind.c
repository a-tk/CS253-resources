#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 50

char *alloc_s(int n) {
    return (char *) malloc(sizeof(char) *n);
}

void mystrcpy(char *d, char *s) {

    //I love programming in C!
    while ((*d++ = *s++))
        ;
}

int main(void) {
    char buffer[BUF_SIZE] = "C programs are the best!";

    char *new_buf = alloc_s(BUF_SIZE);

    mystrcpy(new_buf, buffer);

    printf("length of new string is %d\n", strlen(new_buf));

    return 0;
}