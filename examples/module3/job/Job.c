#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Job.h"

Job *CreateJob(int pid, char *name) {
    Job *j = (Job *)malloc(sizeof(Job));
    j->name = (char *)malloc(sizeof(char) * strlen(name));
    strcpy(j->name, name);
    j->pid = pid;

    return j;
}

void DestroyJob(Job *j) {
    if (j) {
        free(j->name);
        free(j);
    }
}

int GetPid(const Job *j) {
    if (j) {
        return j->pid;
    } else {
        return -1;
    }
}

void SetPid(Job *j, int pid) {
    if (j) {
        j->pid = pid;
    }
}

int JobCompare(const Job *j1, const Job *j2) {
    if (j1 && j2) {
        return j1->pid - j2->pid;
    } else {
        if (j1) {
            return 0 - j1->pid;
        } else if (j2) {
            return j2->pid;
        } else {
            return 0;
        }
    }
}

char *JobToString(const Job *j) {
    char *s; 
    if (j) {
        asprintf(&s, "%d: %s", j->pid, j->name);
        return s;
    } else {
        return NULL;
    }
}