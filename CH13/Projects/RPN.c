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
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(int i) {
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
    return 0;
  } else
    return contents[--top];
}

void stack_underflow(void) {
  printf("Not enough operands\n");
  exit(EXIT_FAILURE);
}

void stack_overflow(void) {
  printf("Too complex\n");
  exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression) {
  int operand1, operand2;
  for (int i = 0; expression[i]; i++) {
    if (expression[i] >= '0' && expression[i] <= '9')
      push((int)(expression[i] - '0'));
    else if (expression[i] == '+')
      push(pop() + pop());
    else if (expression[i] == '-') {
      operand2 = pop();
      operand1 = pop();
      push(operand1 - operand2);
    } else if (expression[i] == '/') {
      operand2 = pop();
      operand1 = pop();
      push(operand1 / operand2);
    } else if (expression[i] == '*')
      push(pop() * pop());
    else if (expression[i] == '=') {
      operand1 = pop();
      make_empty();
      return operand1;
    }
  }
  printf("Expression contains no = sign. Returning 0..\n");
  return 0;
}

int main(void) {
  char expression[100];
  while (1) {
    printf("Enter an RPN expression: ");
    scanf("%s", expression);
    printf("Value: %d\n", evaluate_RPN_expression(expression));
  }
}
