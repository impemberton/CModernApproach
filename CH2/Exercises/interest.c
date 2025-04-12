#include <stdio.h>

int main(void) {
    float loan, interest, payment;
    printf("This program will calculate the balance on a loan after the first, second and third monthly payment\n");
    printf("Please enter amount of loan: ");
    scanf("%f", &loan);
    printf("Please enter interest rate: ");
    scanf("%f", &interest);
    printf("Please enter monthly payment: ");
    scanf("%f", &payment);

    printf("Balance remaining after first payment: %.01f\n", loan = (loan - payment) + (loan * ((interest/100.0f)/12)));
    printf("Balance remaining after second payment: %.01f\n", loan = (loan - payment) + (loan * ((interest/100.0f)/12)));
    printf("Balance remaining after third payment: %.01f\n", loan = (loan - payment) + (loan * ((interest/100.0f)/12)));
}