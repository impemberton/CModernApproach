#include <stdio.h>

int num_digits(int n) {
    int digit_count = 1;
    while (n > 9 || n < -9) {
        n /= 10;
        digit_count += 1;
    }
    return digit_count;
}

int digit(int n, int k) {
    if (k > num_digits(n)) return 0;
    else {
        int divisor = 1;
        for(;k > 1; k--) {
            divisor *= 10;
        }
        return (n / divisor) % 10;
    }
}

int main(void){
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Which digit you want (from the right): ");
    scanf("%d", &k);
    printf("%d\n", digit(n,k));
}