#include <stdio.h>

int main(void) {
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n > 0) {
        while (n > 0) {
            digit = n % 10;
            digit_seen[digit] += 1;
            n /= 10;
        }
        printf("Digit:      ");
        for (int i = 0; i < 10; i++) {
            printf("%2d ", i);
        }
        printf("\nOccurences: ");
        for (int i = 0; i < 10; i++) {
            printf("%2d ", digit_seen[i]);
            digit_seen[i] = 0;
        }
        printf("\n");
        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    return 0;
}