#include <stdio.h>

int main(void) {
    float speed;

    printf("Enter a wind speed in knots: ");
    scanf("%f", &speed);
    
    if (speed < 1.f) {
        printf("Calm\n");
    } else if (speed < 4.f) {
        printf("Light air\n");
    } else if (speed < 28.f) {
        printf("Breeze\n");
    } else if (speed < 48.f) {
        printf("Gale\n");
    } else if (speed < 64.f) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }
}