//compile with -E flag
#define DEBUG 0

int main(void) {

    #if DEBUG
    return 1;
    #else
    return 0;
    #endif

}