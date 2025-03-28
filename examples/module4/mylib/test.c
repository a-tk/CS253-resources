#include <stdio.h>
#include <f.h>


int main(void) {

    Tuple t = f3(1, 100);
    int x = f1(&t);
    int y = f2(&t);

    printf("Hooray, it compiled! %d\n", x + y);

    return 0;
}