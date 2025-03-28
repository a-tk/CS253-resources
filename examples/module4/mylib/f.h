#ifndef F_H
#define F_H

typedef struct {
    int k;
    int v;
} Tuple;

int f1(Tuple *);
int f2(Tuple *);
Tuple f3(int k, int v);


#endif