#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#define MAX_LEN 10

/* mystrnlen - determine the length of a fixed-size string */
int mystrnlen(char *s, int maxlen);

/* mystrncpy - determine the length of a fixed-size string */
char *mystrncpy(char *dest, char *src, int maxlen);

/* mystrcat - concatenate two strings */
char *mystrcat(char *dest, char *src);

/* mystrrev - reverse a string */
void strrev(char *s);

/* mystrcmp - compare two strings */
int mystrcmp(char *s1, char *s2);

/* strpal - determine if a string is a palindrome */
int strpal(char *s);

#endif