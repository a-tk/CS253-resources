#include <stdio.h>

#include "string-utils.h"

#define MAX_LEN 10

int main(void) {
    char string1[MAX_LEN];
    char string2[MAX_LEN];

    printf("please enter two strings:\n");
    scanf("%50s %50s", string1, string2);

    printf("mystrlen:\n\tstring1: %d\n\tstring2: %d\n", mystrnlen(string1, MAX_LEN), mystrnlen(string2, MAX_LEN));
    
    strrev(string1);
    strrev(string2);
    printf("mystrrev:\n\tstring1: %s\n\tstring2: %s\n", string1, string2);

    printf("mystrcmp result: %d\n", mystrcmp(string1, string2));

    printf("string palindrome test:\n\tstring1: %d\n\tstring2: %d\n", strpal(string1), strpal(string2));

    printf("strings concatenated: %s\n", mystrcat(string1, string2));
}