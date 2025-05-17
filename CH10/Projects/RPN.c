#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_full(void);
bool is_empty(void);
void push(int i);
int pop(void);
void stack_overflow (void);
void stack_underflow (void);

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(int i){
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_underflow (void) {
    printf("Not enough operands\n");
    exit(EXIT_FAILURE);
}

void stack_overflow (void) {
    printf("Too complex\n");
    exit(EXIT_FAILURE);
}

int main(void) {
    char c;
    int operand1, operand2;
    for (;;) {
        printf("Enter an RPN expression: ");
        while ((c = getchar()) != '\n') {
            if (c >= '0' && c <= '9')
                push((int) (c - '0'));
            else if (c == '+')
                push(pop() + pop());
            else if (c == '-') {
                operand2 = pop();
                operand1 = pop();
                push(operand1 - operand2);
            }
            else if (c == '/'){
                operand2 = pop();
                operand1 = pop();
                push(operand1 / operand2);
            }
            else if (c == '*')
                push(pop() * pop());
            else if (c == '=') {
                printf("Value of expression: %d\n", pop());
                make_empty();
            } 
            else {
                if (c != ' ') exit(EXIT_SUCCESS);
            }
        }
    }
}
