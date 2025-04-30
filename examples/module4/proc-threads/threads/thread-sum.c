#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sysexits.h>
#include <pthread.h>
#include <string.h>
#include <sys/times.h>
#include <sys/time.h>

void *partial_sum(void *ptr);
static int *values;
static int n;
static int num_threads;
static int *result; /* partial sums array */

float report_sys_time(void);
float report_user_time(void);
double getMilliSeconds(void);

int  main( int argc, char **argv)
{
    long sum = 0;

    pthread_t *threads; // fast way to initialize the array to zero

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <num_threads> <n>\n", argv[0]);
        exit(EX_USAGE);
    }

    num_threads = atoi(argv[1]);
    n = atoi(argv[2]);
    values = (int *) malloc(sizeof(int) * n);
    result = (int *) malloc(sizeof(int) * num_threads);
    threads = (pthread_t *) malloc(sizeof(pthread_t) * num_threads);

    for (int i = 0; i < n; i++) {
        values[i] = 1;
    }

    // the applications perception of time
    double start_time, real_time;
    //total computational power
    float user_time_s, user_time_t;

    // collect that starting point for real time perception
    start_time = getMilliSeconds();
    // collect starting point for user and sys time
    user_time_s = report_user_time();

    int index;
    // create the threads
    for (index = 0; index < num_threads; index++) {
        pthread_create(&threads[index], NULL, partial_sum, (void *) index);
    }

    // wait for them to finish
    for (index = 0; index < num_threads; index++) {
        pthread_join(threads[index], NULL);
    }

    // compute the results
    for (index = 0; index < num_threads; index++) {
        sum += result[index];
    }

    // calculated percieved time
    real_time = getMilliSeconds() - start_time;

    // calculated computation time in user space
    user_time_t = report_user_time() - user_time_s;

    printf("Total sum = %ld real time taken = %lf milliseconds\n", sum, real_time);
    printf("\tTotal computation time = %g milliseconds\n", user_time_t);

    exit(EXIT_SUCCESS);
}

void *partial_sum(void *ptr)
{
    int sum = 0;
    int i;
    int start, end, index;

    index = (int) ptr; //abuse parameter passing mechanism to obtain copy

    sum = 0;
    // total array is size n. Split into num_threads chunks
    
    start = index * (n / num_threads);
    end = ((index + 1) * (n / num_threads) - 1);

    for (i=start; i<=end; i++)
        sum += values[i];

    printf("index = %d, sum = %d\n", index, sum);
    result[index] = sum;
    pthread_exit(NULL);
}

float report_user_time(void) {
    struct tms buffer;
    float cputime;

    times(&buffer);
    cputime = (buffer.tms_utime)/ (float) sysconf(_SC_CLK_TCK);
    return (cputime * 1000);
}

double getMilliSeconds(void) {
    struct timeval now;
    gettimeofday(&now, (struct timezone *)0);
    return (double) now.tv_sec*1000.0 + now.tv_usec/1000.0;
}