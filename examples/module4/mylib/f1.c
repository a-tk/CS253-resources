#include "f.h"


int f1(Tuple *t) {
    if (t) {
        return t->k;
    } else {
        return -1;
    }
}