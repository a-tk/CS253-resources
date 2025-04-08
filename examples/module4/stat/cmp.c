#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

void print_usage(const char *progname) {
    printf("Usage: %s -f <file1> -s <file2>\n", progname);
    printf("Options:\n");
    printf("  -f <file1>   First file\n");
    printf("  -s <file2>   Second file\n");
    printf("  -h           Show this help message\n");
}

int main(int argc, char *argv[]) {
    int opt;
    char *file1 = NULL, *file2 = NULL;

    while ((opt = getopt(argc, argv, "hf:s:")) != -1) {
        switch (opt) {
            case 'h':
                print_usage(argv[0]);
                return 0;
            case 'f':
                file1 = optarg;
                break;
            case 's':
                file2 = optarg;
                break;
            default:
                print_usage(argv[0]);
                return 1;
        }
    }

    if (!file1 || !file2) {
        fprintf(stderr, "Both -f and -s options are required.\n");
        print_usage(argv[0]);
        return 1;
    }

    struct stat stat1, stat2;

    if (stat(file1, &stat1) != 0 || stat(file2, &stat2) != 0) {
        perror("stat");
        return 1;
    }

    if (stat1.st_mtime > stat2.st_mtime)
        printf("%s is newer than %s\n", file1, file2);
    else if (stat1.st_mtime < stat2.st_mtime)
        printf("%s is newer than %s\n", file2, file1);
    else
        printf("Both files have the same modification time\n");

    return 0;
}

