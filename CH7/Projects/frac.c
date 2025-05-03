#include <stdio.h>
int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char c;

    printf("Enter two fractions (separated by +,-,*,/): ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &c, &num2, &denom2);

    switch (c)
    {
    case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        break;

    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        break;

    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        break;

    case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        break;
    
    default:
        break;
    }
    
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}