#include <stdio.h>

int main(void) {
    int n;
    long double factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        factorial *= i;
    }

    printf("Factorial of %ld: %llf\n", n, factorial);
}