#ifndef __JOB_H
#define __JOB_H

#include <stdio.h>
#include <stdlib.h>

#define MAXPID_DIGITS 20

typedef struct job Job;
typedef struct job *JobPtr;

struct job {
    int jobid;
    char *info;
};

JobPtr createJob(int, char *);
void freeJob(void * job);
int jobCompare(const void *, const void *);
char *jobToString(const void *);

#endif /* __JOB_H */
