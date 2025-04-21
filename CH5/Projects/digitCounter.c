#include <stdio.h>

int main(void) {
    int num, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = num < 0 ? 0 : 
    num < 10 ? 1 :
    num < 100 ? 2 :
    num < 1000 ? 3 :
    num < 10000 ? 4 : 0;

    if (digits) {
        printf("The number %d has %d digits\n", num, digits);
    }
    else {
        printf("Invalid number (number must be positive and below 10000)\n");
    }

    
}