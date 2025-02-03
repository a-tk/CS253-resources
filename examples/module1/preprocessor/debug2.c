/* gcc -Wall -DDEBUG=1 -E debug2.c -o debug2.e */
#include <stdio.h>
#include <stdlib.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */


/* count number of characters, words and lines in the standard input */

int main(int argc, char *argv[])
{
    char c;
    long nc, nw, nl;
    int state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF ) {
#ifdef DEBUG
        printf("c=%c\n",c);
#endif
#if DEBUG==1
        printf("level 1");
#endif
        nc++;
#ifdef DEBUG
        printf("nc=%ld\n",nc);
#endif
        if (c == '\n') {
            nl++;
#ifdef DEBUG
            printf("nl=%ld\n",nl);
#endif
        }
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            nw++;
#ifdef DEBUG
            printf("nw=%ld\n",nw);
#endif
        }
    }

    printf("%ld %ld %ld\n", nl, nw, nc);
    exit(0);
}