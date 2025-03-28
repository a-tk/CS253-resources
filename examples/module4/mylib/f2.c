#include "f.h"

int f2(Tuple *t) {
    if (t) {
        return t->v;
    } else {
        return -1;
    }
}