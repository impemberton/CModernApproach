#include <stdio.h>

int main(void) {
    float e = 1.f, E;

    printf("Enter the smallest term and let's approximate e: ");
    scanf("%f", &E);

    for (int i = 1; ; i++) {
        float factorial = i;
        for(int j = i - 1; j > 0; j--) {
            factorial *= j;
        }
        if (1.0f/factorial < E) break;
        
        e += 1.0f/factorial;
    }
    printf("Our approximation of e: %f\n", e);
}