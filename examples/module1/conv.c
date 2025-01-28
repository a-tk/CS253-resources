//compile with -Wconversion flag
#include <stdio.h>


int main(void) {

    int m; long n = 10000000000;
    float x; double y = 2E300;
    m = n;
    x = y;
    printf("%ld %d %le %e\n", n, m, y, x);

    return 0;

}