#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


/* this program will read from the file specified and then sleep */
/* use in conjunction with /proc filesystem */
int main(int argc, char **argv) {

    if (argc < 3) {
        fprintf(stderr, "Usage: %s <file> <seconds>\n", argv[0]);
        exit(-1);
    }

    FILE *file = fopen(argv[1], "r");
    int seconds = atoi(argv[2]);

    // read the entire file: 
    while (fgetc(file) != EOF) ;

    //sleep the specified number of seconds
    printf("sleep returned: %u\n", sleep(seconds));

    fclose(file);

    return 0;

}
