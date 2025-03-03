#include <stdio.h>
#include <math.h> // link with -lm


typedef struct {
    int x;
    int y;
} Point;

double distance(Point p1, Point p2) {

    return sqrt((double)((p2.x-p1.x)*(p2.x-p1.x)) + (double)((p2.y-p1.y)*(p2.y-p1.y)));
}

void swapPointX(Point p1, Point p2) {

    int temp = p1.x; 
    p1.x = p2.x; 
    p2.x = temp;
}

int main(void) {
    Point origin;        //can be declared but not initialized. 
    Point mypt = {3, 4}; //can be initialized too.

    //we can assign values to mypt using the '.' operator
    origin.x = 0;
    origin.y = 0;

    printf("origin is %d, %d\n", origin.x, origin.y);

    printf("distance between both points: %g\n", distance(mypt, origin));

    // printf("mypt.x = %d\n", mypt.x);
    // swapPointX(mypt, origin);
    // printf("mypt.x = %d\n", mypt.x);

    return 0;
}
