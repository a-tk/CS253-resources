#include <stdio.h>

/* Program that prompts the user with options */
int main(void) {

    char menuOp;
    printf("\nMENU\n");
    printf("h - Say hello\n");
    printf("g - Say good day\n");
    printf("q - Quit");


    do {
        printf("\nChoose an option:\n");
        scanf(" %c", &menuOp);
        switch(menuOp) {
            case 'h': 
                printf("hello\n");
                break;
            case 'g':
                printf("good day\n");
                break;
            default:
                printf("unrecognized option %c\n", menuOp);
                break;
        }
    } while (menuOp != 'q');

    return 0;
}