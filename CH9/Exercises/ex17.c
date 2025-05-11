#include <stdio.h>

int gcd(int m, int n) {
    int remainder;
    if (n == 0) 
        return m;
    else    
        gcd(n, m % n);
}

int main(void) {
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    printf("Greatest common divisor: %d\n", gcd(m, n));
}