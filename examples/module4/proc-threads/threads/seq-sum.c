#include <sys/times.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>

void *partial_sum(void *ptr);
int *values;
int n;
int result[2]; /* partial sums arrays */

float report_cpu_time(void);
double getMilliSeconds(void);

int  main( int argc, char **argv) {
    int i;
    long sum;
    double start_time, total_time;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <n> \n", argv[0]);
        exit(1);
    }
    n = atoi(argv[1]);
    values = (int *) malloc(sizeof(int)*n);
    for (i=0; i<n; i++)
        values[i] = 1;

    start_time = getMilliSeconds();
    sum = 0;
    for (i=0; i<n; i++) {
        sum += values[i];
    }
    total_time = getMilliSeconds() - start_time;

    printf("Total sum = %ld time taken = %lf milliseconds \n", sum, total_time);
    exit(0);
}


float report_cpu_time(void) {
    struct tms buffer;
    float cputime;

    times(&buffer);
    cputime = (buffer.tms_utime)/ (float) sysconf(_SC_CLK_TCK);
    return (cputime);
}

double getMilliSeconds(void) {
    struct timeval now;
    gettimeofday(&now, (struct timezone *)0);
    return (double) now.tv_sec*1000.0 + now.tv_usec/1000.0;
}

