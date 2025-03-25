#include <stdio.h>

void print_int(void *i) {
    int *d = (int *)i;

    printf("%d\n", *d);
}

void print_double(void *r) {
    double *real = (double *)r;

    printf("%f\n", *real);
}

/* prints whatever entered using a print function */
void printer(void *v, void (*p)(void *)) {
    p(v);
}

int main(void) {
    int myint = 4;
    double mydouble = 3.14;

    printer(&myint, print_int);
    printer(&mydouble, print_double);

    return 0;
}