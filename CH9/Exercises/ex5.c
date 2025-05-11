#include <stdio.h>

int num_digits(int n) {
    int digit_count = 1;
    while (n > 9 || n < -9) {
        n /= 10;
        digit_count += 1;
    }
    return digit_count;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d has %d digits\n", n, num_digits(n));
}