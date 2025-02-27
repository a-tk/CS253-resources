#include <stdio.h>

int main(void) {

    void *ptr;
    int i = 12345;
    char *string = "Hello, world!";

    printf("address of ptr: %p\n", &ptr);
    printf("address of i: %p\n", &i);
    printf("address of string: %p\n", string);

    while(1) {
        printf("enter a memory address to investigate:\n");
        scanf("%p", &ptr);
        printf("scanned %p\n", ptr);
        printf("int at %p is %d\n", ptr, *(int *)ptr);
        printf("char at %p is %c\n", ptr, *(char *)ptr);
    }

    return 0;
}