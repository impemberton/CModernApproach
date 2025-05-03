#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y1 = 1, y2;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(1) {
        y2 = (x/y1 + y1) / 2;
        if (fabs(y1 - y2) < 0.00001 * y2) break;
        y1 = y2;
    }
    printf("Square root: %lf\n", y2);
}