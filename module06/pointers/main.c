#include <stdio.h>

int myStrlen(char *src) {
    int c;
    for (c = 0; *src != '\0'; src++) {
        c++;
    }

    return c;
}

void myStrcpy(char *dest, char *src) {
    int i;

    for (i = 0; *(src + i) != '\0'; i++) {
        *(dest + i) = *(src + i);

    }
    *(dest + i) = '\0';

}

int main(void) {

    char input[11];
    char output[11];
    printf("Enter a string\n");
    scanf("%10s", input);

    myStrcpy(output, input);

    printf("output: %s\n", output);
    printf("size of output: %d\n", myStrlen(output));

    return 0;
}