#include <stdio.h>
#include <stdlib.h>

#define BODY_BIT_SIZE 1000000
int A[BODY_BIT_SIZE];
extern void transfer();

void booth(char *xyz) {
    int i;
    static int neo[BODY_BIT_SIZE];
    int *morpheus = (int *)malloc(sizeof(int) * BODY_BIT_SIZE);
    for (i = 0; i < BODY_BIT_SIZE; i++)
        morpheus[i] = neo[i];
    morpheus[0] = xyz;
    transfer();
}

int main(int argc, char *argv[]) {
    char *xyz = (char *)malloc(sizeof(char) * BODY_BIT_SIZE);
    printf("Hello?\n");
    scanf("%s", xyz);
    booth(xyz);
}