#ifndef JOB_H
#define JOB_H

typedef struct {
    int pid;
    char *name;
} Job;

// functions to create and destroy
Job *CreateJob(int, char *);

void DestroyJob(Job *);

//methods on a Job
int GetPid(const Job *);
void SetPid(Job *, int);
int JobCompare(const Job *, const Job *);
char *JobToString(const Job *);

#endif //JOB_H