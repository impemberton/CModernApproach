#include <stdio.h>
#include <string.h>
#define LEN 100

void reverse(char *message);

void reverse_ptr(char *message);

int main(void) {
  char msg[LEN] = {0}, c;
  int i;
  printf("Enter a message: ");
  for (i = 0; (c = getchar()) != '\n' && i < LEN; i++)
    msg[i] = c;
  reverse_ptr(msg);
  printf("Reversal is: %s\n", msg);
}

void reverse(char *message) {
  char temp;
  for (int i = 0, j = strlen(message) - 1; i < j; i++, j--) {
    temp = message[i];
    message[i] = message[j];
    message[j] = temp;
  }
}

void reverse_ptr(char *message) {
  char temp;
  for (char *p = message, *q = p + strlen(message) - 1; p < q; p++, q--) {
    temp = *p;
    *p = *q;
    *q = temp;
  }
}
