

/* mystrncpy - determine the length of a fixed-size string */
char *mystrncpy(char *dest, char *src, int maxlen) {
    int i;

    for (i = 0; i < maxlen && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for ( ; i < maxlen; i++) {
        dest[i] = '\0';
    }

    return dest;
}


/* mystrnlen - determine the length of a fixed-size string */
int mystrnlen(char *s, int maxlen) {
    return -1;
}

/* mystrcat - concatenate two strings */
char *mystrcat(char *dest, char *src) {
    return dest;
}

/* mystrrev - reverse a string */
void strrev(char *s){
    
}

/* mystrcmp - compare two strings */
int mystrcmp(char *s1, char *s2) {
    return -1;
}

/* strpal - determine if a string is a palindrome */
int strpal(char *s) {
    return 0;
}