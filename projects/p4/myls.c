#define _POSIX_C_SOURCE 2
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/sysmacros.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "List.h"
#include "file-info.h"


void printUsage(char *s) {
    printf("Usage: %s -R -d <directory>\n", s);
}

int main(int argc, char **argv) {

    char *path = NULL;
    int opt = 0;

    int (*compar)(const void *, const void *) = FileInfoCompareTypeAndName;
    bool (*filter)(const void *) = FileInfoNoFilter;

    // TODO

    return 0;

}
