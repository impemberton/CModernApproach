#include <stdio.h>

int power(int x, int n) {
    int xn;
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        xn = power(x, n/2);
        return xn*xn;
    } else {
        return x*(power(x, n-1));
    }
}

int main(void) {
    int x, n;
    printf("This program calculates x^n.\n");
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d^%d = %d\n", x, n, power(x, n));
}