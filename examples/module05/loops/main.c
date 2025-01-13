#include <stdio.h>

int main(void) {

    // C has while and for loops

    int i = 0;
    while (i < 10) {
        i++;
    }

    //an equivilent for loop has the following structure:
    for (int i = 0; i < 10; i++) {
        //do something
    }

    // for loops can leave out the fields if you want that for some reason.
    for (;;) {
        //do something
    }

    // the curly braces are also not required

    while (1);
    for (;;);

    // this can lead to a number of very common bugs...

    // like if statements, there is no boolean type used
    // something strange is that assignment statements can be used.
    // the common use case is reading a character of input and assigning it in a while loop

    /* Version 1 */
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    /* Version 2 */
    int ch;
    while ( (ch = getchar()) != EOF) {
        putchar(ch);
    }

    // it is best practice to use curly braces for all control flow statements. 
    // even for one line bodies that don't technically need them.
    return 0;
}