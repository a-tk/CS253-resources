#include <stdio.h>

int main(void) {

    char secret_code[20] = "my password";
    char string[10] = "hi there";

    int i = 0;
    while (1) {
        printf("%c", string[i]);
        getchar(); // press any key to continue
        i++;
    }

    return 0;
}
