#include <stdio.h>

int main(void) {
    float income, tax;

    printf("Please enter your income: $");
    scanf("%f", &income);

    tax = income < 750.f ? income * 0.01f :
    income < 2250.f ? 7.5f + (0.02f * (income - 750.f)) :
    income < 3750.f ? 37.5f + (0.03f * (income - 2250.f)) :
    income < 5250.f ? 82.5f + (0.04f * (income - 3750.f)) :
    income < 7000.f ? 142.5f + (0.05f * (income - 5250.f)) :
    230.f + (0.06f * (income - 7000.f));

    printf("On $%.2f, you will owe $%.2f.\n", income, tax);
}