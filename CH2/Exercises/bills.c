#include <stdio.h>

int main(void){
    int amount, twenties, tens, fivers, twos, pounds;
    printf("This program will calculate the minimun pound notes/coins needed for a bill.\nPlease enter an amount: ");
    scanf("%d", &amount);
    twenties = amount / 20;
    amount %= 20;
    tens = amount / 10;
    amount %= 10;
    fivers = amount / 5;
    amount %= 5;
    pounds = amount;
    printf("Twenties: %d\nTens: %d\nFivers: %d\nPounds: %d\n", twenties, tens, fivers, pounds);

}