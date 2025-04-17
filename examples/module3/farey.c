#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

typedef struct {
    int n;
    Fraction f;
} Number;

Fraction farey(double real, int n) {
    Fraction low, high, guess;
    // start at 0/1 and 1/1
    low.numerator = 0;
    low.denominator = 1;
    high.numerator = 1;
    high.denominator = 1;

    int i = 0;

    double g;

    // starting at a/b and c/d, guess is a+c/b+d (the mediant)
    while (i < n) {
        guess.numerator = low.numerator + high.numerator;
        guess.denominator = low.denominator + high.denominator;
        g = (double)guess.numerator / guess.denominator;

        if (g < real) {
            low.numerator = guess.numerator;
            low.denominator = guess.denominator;
        } else {
            high.numerator = guess.numerator;
            high.denominator = guess.denominator;
        }

        i++;
    }

    return guess;
}

void printNumber(Number *n) {
    printf("%d and %d/%d\n", n->n, n->f.numerator, n->f.denominator);
}

int main(int argc, char **argv) {

    if (argc < 3) {
        fprintf(stderr, "Usage: %s <real num> <number of loops>\n", argv[0]);
        fprintf(stderr, "\tExample: %s 1.23 10\n", argv[0]);
        exit(1);
    }

    double r = atof(argv[1]);
    int n = atoi(argv[2]);

    Number number;
    number.n = (int)r;
    number.f = farey(r-(int)r, n);

    printNumber(&number);

    return 0;

}