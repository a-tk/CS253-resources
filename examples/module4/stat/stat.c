#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>    // for errno

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    struct stat fileinfo;
    int success = stat(argv[1], &fileinfo);

    if (success != 0) {
        perror("stat");
        return 2;
    }

    printf("File mode is %o\n", fileinfo.st_mode);
    printf("File size is %ld\n", fileinfo.st_size);
    printf("# of 512 byte blocks used is %ld\n", fileinfo.st_blocks);
    printf("fs block size is %ld\n", fileinfo.st_blksize);

    return 0;
}
