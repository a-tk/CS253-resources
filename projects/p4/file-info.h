#ifndef FILE_INFO_H
#define FILE_INFO_H

#include <stdbool.h>

typedef struct {
    char *name;
    time_t mtime;
    off_t size;
    mode_t mode;
} FileInfo;

/**
 * TODO: Complete the documentation here
 */
FileInfo *CreateFileInfo(char *name, time_t mtime, off_t size, mode_t mode);

/**
 * TODO: Complete the documentation here
 */
void DestroyFileInfo(void *);

/**
 * TODO: Complete the documentation here
 */
bool FileInfoNoFilter(const void *obj);

/**
 * TODO: Complete the documentation here
 */
bool FileInfoDirFilter(const void *obj);

/**
 * TODO: Complete the documentation here
 */
int FileInfoCompareSize(const void *, const void *);


/**
 * TODO: Complete the documentation here
 */
int FileInfoCompareTypeAndName(const void *, const void *);

/**
 * TODO: Complete the documentation here
 */
int FileInfoCompareTime(const void *, const void *);

/**
 * TODO: Complete the documentation here
 */
char *FileInfoToString(const void *);

#endif