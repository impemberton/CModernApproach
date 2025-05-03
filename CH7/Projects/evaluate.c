#include <stdio.h>

int main(void) {
    char operator;
    float value, operand;

    printf("Enter an expression: ");

    scanf("%f%c", &value, &operator);

    while (operator != '\n'){
        scanf("%f", &operand);
        switch (operator)
        {
        case '+':
            value += operand;
            break;
        case '-':
            value -= operand;
            break;
        case '*':
            value *= operand;
            break;
        case '/':
            value /= operand;
            break;
        default:
            break;
        }
        scanf("%c", &operator);
    }
    printf("Value of expression: %f\n", value);
}