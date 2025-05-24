#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
bool nested_correctly = true;

void make_empty(int *top_ptr);
bool is_full(int *top_ptr);
bool is_empty(int *top_ptr);
void push(char c);
char pop(void);
void stack_overflow (void);
void stack_underflow (void);

void make_empty(int *top_ptr) {
  *top_ptr = 0;
}

bool is_empty(int *top_ptr) {
  return *top_ptr == 0;
}
  
bool is_full(int *top_ptr) {
  return *top_ptr == STACK_SIZE;
}
  
void push(char c){
  if (is_full(&top))
    stack_overflow() ;
  else
    contents[top++] = c;
}
  
char pop(void) {
  if (is_empty(&top))
    stack_underflow();
  else
    return contents[--top];
}

void stack_underflow (void) {
  nested_correctly = false;
}

void stack_overflow (void) {
  printf("Stack overflow\n");
  exit(EXIT_FAILURE);
}

int main(void) {
  char c;
  printf("Enter parentheses and/or braces: ");
  while ((c = getchar()) != '\n') {
    if (c == '(' || c == '{') {
      push(c);
    }
    else if (c == ')'){
      if(pop() != '(')
        nested_correctly = false;
    }

    else if (c == '}')
      if(pop() != '{')
        nested_correctly = false;
  }
  if (nested_correctly && is_empty(&top))
    printf("Parentheses/braces are nested properly\n");
  else
    printf("Parentheses/braces are not nested properly\n");
}
