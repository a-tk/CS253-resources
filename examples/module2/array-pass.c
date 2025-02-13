#include <stdio.h>

void arr_info(int A[]) {

    printf("arr_info:\tsizeof(A) = %lu\n", sizeof(A));

}

void arr_info2(int *A) {

    printf("arr_info2:\tsizeof(A) = %lu\n", sizeof(A));

}

int main(void) {
    int A[10];

    printf("main:\t\tsizeof(A) = %lu\n", sizeof(A));

    arr_info(A);
    arr_info2(A);

    return 0;
}