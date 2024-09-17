#include <stdio.h>
#include <stdbool.h>

int main(void) {
    /* 
    
        including stdbool provides some macros equivalent to the following:

        #define true 1
        #define false 0
        #define bool _Bool

    */


    bool booleanValue = true;

    if (booleanValue) {
        printf("True!\n");
    } else {
        printf("False!\n");
    }

    return 0;
}