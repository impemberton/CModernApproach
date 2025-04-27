#include <stdio.h>

int main(void) {
    float loan, interest, payment;
    int num_payments;
    printf("This program will calculate the balance on a loan after a number of monthly payments\n");
    printf("Please enter amount of loan: ");
    scanf("%f", &loan);
    printf("Please enter interest rate: ");
    scanf("%f", &interest);
    printf("Please enter monthly payment: ");
    scanf("%f", &payment);
    printf("Please enter the number of payments: ");
    scanf("%d", &num_payments);

    for (int i = 1; i <= num_payments; i++) printf("Balance remaining after %d payment(s): %.01f\n", i, loan = (loan - payment) + (loan * ((interest/100.0f)/12)));
    
}