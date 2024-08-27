//demonstrates basic define macro
//compile with -E flag

#define PI 3.14

int main(void) {
    double area = 5 * 5 * PI;
    return 0;
}