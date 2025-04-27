#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("%d, reversed is ", num);
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);
    printf("\n");
}