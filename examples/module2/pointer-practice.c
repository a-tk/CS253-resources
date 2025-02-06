
/* use the debugger to demonstrate */
int main(void) {
    int x = 1, y = 2;
    int *ip;

    ip = &x;
    y = *ip;
    *ip = 10;

    *ip = *ip + 1;
    *ip += 1;
    ++*ip;
    (*ip)++;

    return 0;

}