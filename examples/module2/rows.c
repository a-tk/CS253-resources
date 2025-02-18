#include <stdio.h>

int main(void) {

    int A[3][6]; // the size of each cell is sizeof(int)

    /* 
     *
     * The first cell of the first row is at A[0][0];
     * The second cell of the first row is at A[0][1];
     * these will be sizeof(int) bytes apart in memory
     * Because of pointer arithmetic, C shows us the 
     * number of int sized cells they are apart from each other
     *
     */
    printf("%ld\n", &A[0][1] - &A[0][0]);
    getchar();

    /*
     *
     * A cast to void * shows sizeof(int)
     *
     */
    printf("%ld\n", (void *)&A[0][1] - (void *)&A[0][0]);
    getchar();

    /*
     * A[0][0] to A[1][0] shows that the rows come one after another
     */
    printf("%ld\n", &A[1][0] - &A[0][0]);
    getchar();


    /*
     * This is the same as sizeof(A[0])/sizeof(int);
     */
     printf("%ld\n", sizeof(A[0])/sizeof(int));
     getchar();

    return 0;
}