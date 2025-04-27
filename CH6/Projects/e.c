#include <stdio.h>

int main(void) {
    int n;
    float e = 1.f;

    printf("Enter a number and let's approximate e: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float factorial = i;
        for(int j = i - 1; j > 0; j--) {
            factorial *= j;
        }
        e += 1.0f/factorial;
    }
    printf("Our approximation of e: %f\n", e);
}