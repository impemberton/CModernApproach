#include <stdio.h>

int main(void) {
    float n, largest;
    largest = 0.f;
    do {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > largest) {
            largest = n;
        }
    } while (n > 0);

    printf("The largest number entered was %.2f\n", largest);
}