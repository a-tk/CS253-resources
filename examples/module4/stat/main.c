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

    // Open the file for reading
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    int success = fstat(fd, &fileinfo);

    if (success != 0) {
        perror("fstat");
        return 2;
    }

    printf("File mode is %o\n", fileinfo.st_mode);
    printf("File size is %ld\n", fileinfo.st_size);
    printf("File 512byte blocks used is %ld\n", fileinfo.st_blocks);
    printf("fs block size is %ld\n", fileinfo.st_blksize);

    // Close the file
    if (close(fd) == -1) {
        perror("close");
        return 3;
    }

    return 0;
}
