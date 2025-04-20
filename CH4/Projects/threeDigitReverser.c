#include <stdio.h>

int main(void) {
    int i, d1, d2, d3;

    printf("Enter a two or three digit number: ");
    scanf("%d", &i);
    d1 = i / 100;
    d2 = i % 100;
    d3 = d2 % 10;
    d2 = d2 / 10;
    printf("The reversal is: %d%d%d\n", d3, d2, d1);
}