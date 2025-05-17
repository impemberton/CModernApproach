#include <stdio.h>

int polynomial(int x) {
    int x2 = x*x,
        x3 = x*x*x,
        x4 = x*x*x*x,
        x5 = x*x*x*x*x;

    return 3*x5 + 2*x4 - 5*x3 - x2 + 7*x - 6;
}

int main(void) {
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("f(x) = %d\n", polynomial(x));
}