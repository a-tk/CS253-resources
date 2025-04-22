#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* delimiters = " \t\n\r";

int main(int argc, char **argv) {
    if (argc < 2)
    {
        printf("Usage: %s <file-name>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char *filename = argv[1];

    char *line = NULL, *token;

    size_t linecap = 0;
    ssize_t linelen;



    FILE *f = fopen(filename, "r"); //open the file in read mode
    if (f == NULL) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    int wordCount = 0;

    
    while ((linelen = getline(&line, &linecap, f)) != -1) {
        token = strtok(line, delimiters);
        while (token != NULL) {
            wordCount++;
            token = strtok(NULL, delimiters);
        }
    }
    
    printf("%d\n", wordCount);

    fclose(f); //close otherwise memory leak!
    free(line);

	return 0;

}