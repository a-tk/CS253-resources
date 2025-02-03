/* small programs without header files can declare functions at the top of the file */

int f2(int);

int main(void) {
    // f2 can be called because its name appears above main's definition
    f2(12);
    return 0;
}

// the definition for f2 is then found below
int f2(int x) {
    return x * 2;
}