#include <stdio.h>

int main(void) {

    int    userInt;
    double userDouble;
    char   userChar;
    char   userString[50];

    printf("Enter integer:\n");
    scanf("%d", &userInt);

    printf("Enter double:\n");
    scanf("%lf", &userDouble);

    printf("Enter character:\n");
    scanf(" %c", &userChar);

    printf("Enter string:\n");
    scanf("%s", userString);

    printf("%d %lf %c %s\n", userInt, userDouble, userChar, userString );

    printf("%s %c %lf %d\n", userString, userChar, userDouble, userInt);
   
    printf("%lf cast to an integer is %d\n", userDouble, (int)userDouble);

    return 0;
}