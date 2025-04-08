#define _GNU_SOURCE
#include <string.h>
#include <stdbool.h>

#include "Job.h"

#define UNUSED(x) (void)(x)

JobPtr createJob(int jobid, char *info) {
    JobPtr newJob = (JobPtr) malloc(sizeof(Job));
    newJob->jobid = jobid;
    newJob->info = (char *) malloc(sizeof(char) * (strlen(info) + 1));
    strcpy(newJob->info, info);
    return newJob;
}


char *jobToString(const void *job) {
    JobPtr theRealJob = (JobPtr) job;
    char *temp = NULL;
    asprintf(&temp, "[%d] %s", theRealJob->jobid, theRealJob->info);
    return temp;
}

int jobCompare(const void *obj1, const void *obj2) {

    return ((JobPtr)obj2)->jobid - ((JobPtr)obj1)->jobid;
}


void freeJob(void *job) {
    if (job == NULL)
	return;

    JobPtr theRealJob = (JobPtr) job;
    free(theRealJob->info);
    free(theRealJob);
}

bool noJobFilter(const void *obj) {
    
    UNUSED(obj);
    return true;
}

bool jobEvenFilter(const void *obj) {
    JobPtr j = (JobPtr)obj;

    if ((j->jobid & 1) == 0) {
        return true;
    } else {
        return false;
    }
}
