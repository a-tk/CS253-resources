#include <stdio.h>
#include <stdlib.h>

#include "Job.h"

int main(void) {
    Job *j1 = CreateJob(1, "echo");
    char *c;

    printf("j1 is %s\n", (c = JobToString(j1)));

    free(c);

    Job *j2 = CreateJob(72, "diff");

    printf("JobCompare(j1, j2) = %d\n", JobCompare(j1, j2));

    DestroyJob(j1);
    DestroyJob(j2);

    return 0;

}