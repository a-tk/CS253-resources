#include <stdio.h>

/* version 1 */
void strcpy_1(char *d, char *s) {
	int i = 0;
	while ((d[i] = s[i]) != '\0')
		i++;
}

/* version 2 */
void strcpy_2(char *d, char *s) {
	while ((*d = *s) != '\0')
		d++;
		s++;
}

/* version 3 */
void strcpy_3(char *d, char *s) {
	while ((*d++ = *s++) != '\0')
		;
}


/* version 4 */
void strcpy_4(char *d, char *s) {
	while ((*d++ = *s++));
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return -1;
    }
    int test1 = 0;  // for testing purposes.
    char dest[8];
    int test2 = -1; // for testing purposes.
    char *src = argv[1];

    strcpy_1(dest, src);
    //strcpy_2(dest, src);
    //strcpy_3(dest, src);
    //strcpy_4(dest, src);

    printf("dest = %s\n", dest);
    printf("test1 = %d\n", test1);
    printf("test2 = %d\n", test2);

    return 0;
}