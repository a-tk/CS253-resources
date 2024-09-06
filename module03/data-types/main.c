#include <stdio.h>

int main(void) {
    
    printf("size of int is %lu\n", sizeof(int));

    printf("size of long int is %lu\n", sizeof(long int));

    printf("size of long long int is %lu\n", sizeof(long long int));

    printf("size of char is %lu\n", sizeof(char));

    char string[50] = "Hello!";
    printf("size of char[] is %lu\n", sizeof(string));

    printf("size of float is %lu\n", sizeof(float));

    printf("size of double is %lu\n", sizeof(double));

    printf("enter code points\n");
    //what are valid ASCII code points?
    int inp = 1;
    while(inp) {
        scanf("%d", &inp);
        printf("%c\n", (char)inp);
    }

    return 0;
}