#include <stdio.h>
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int main(void) {
    int num, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    reduce(num, denom, &num, &denom);
    printf("In lowest terms: %d/%d\n", num, denom);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int m = numerator, n = denominator, remainder;
    while (n > 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator/m;
    *reduced_denominator = denominator/m;
}
