#include <stdio.h>

#undef FLAG

int main(void) {

    #ifdef FLAG
    //fprintf allows us to select an output channel (stdout, stderr)

    fprintf(stdout, "stdout: Hello world!\n");

    fprintf(stderr, "ERROR: something wrong\n");

    #else
    printf("Please enter a double\n");

    double number;

    int returnCode = scanf("%lf", &number);

    if (returnCode < 1) {
        fprintf(stderr, "Error: Incorrect format\n");
    } else {
        printf("scanned %lf\n", number);
    }

    #endif

    return 0;
}