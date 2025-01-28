#include <stdlib.h>
#include <stdio.h>


int main(void) {
    printf("size of char = %lu \n", sizeof(char));
    printf("size of short = %lu  \n", sizeof(short));
    printf("size of unsigned short  = %lu  \n", sizeof(unsigned short));
    printf("size of int = %lu  \n", sizeof(int));
    printf("size of unsigned int = %lu  \n", sizeof(unsigned int));
    printf("size of long = %lu  \n", sizeof(long));
    printf("size of unsigned long = %lu  \n", sizeof(unsigned long));
    printf("size of float = %lu  \n", sizeof(float));
    printf("size of double = %lu  \n", sizeof(double));
    printf("size of long double = %lu  \n", sizeof(long double));
    return 0;
}