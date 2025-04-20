#include <stdio.h>

int main(void) {
    int i, octal;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);
    octal = i % 8;
    i /= 8;
    octal += (i % 8) * 10;
    i /= 8;
    octal += (i % 8) * 100;
    i /= 8;
    octal += (i % 8) * 1000;
    i /= 8;
    octal += (i % 8) * 10000;
    printf("In octal, your number is: %05d\n", octal);
}