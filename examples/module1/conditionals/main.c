#include <stdio.h>

int main(void) {

    int x = 1;

    if (0) {
        printf("Never true...\n");
    } else if (x) {
        printf("always true\n");
    } else {
        //impossible to reach
    }


    // these are sloppy and can lead to mistakes. Best practice to to avoid
    // using an expression only.


    //This is specific and easy for a programmer to read and understand
    if (x == 1) {
        printf("Always true...\n");
    }

    char *string = "Hello!";

    if (strcmp(string, "Hello!") == 0) {
        printf("matched!\n");
    }

    return 0;
}