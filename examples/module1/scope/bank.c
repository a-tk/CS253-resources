#include <stdio.h>
#include "account.h"

extern int balance;

int main(void) {
    printf("depositing $42\n");

    deposit(42);

    printf("account balance is $%d\n", balance);
    
    return 0;
}