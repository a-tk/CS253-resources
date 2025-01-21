#include <stdio.h>
#include <stdlib.h>

/* Usage: cmd <string> <int> <float> */
/* because the name of the executable counts as a parameter, there are 4 total */
int main(int argc, char *argv[]) {

    int i = 0;
    if (argc != 4) {
        // note the reference to the name of the program in argv[0]
        fprintf(stderr, "Usage: %s <string> <int> <float>\n", argv[0]);
        exit(1); // reference "man 3 exit"
    }

    // like in Java and other languages, i++ increments the variable after it has been used
    printf("argument %d = %s\n", i++, argv[0]);
    printf("argument %d = %s\n", i++, argv[1]);
    printf("argument %d = %d\n", i++, atoi(argv[2]));
    printf("argument %d = %f\n", i++, atof(argv[3]));
    return 0;

}