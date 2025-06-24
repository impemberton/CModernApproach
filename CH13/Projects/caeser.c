#include <stdio.h>

void encrypt(char *message, int shift);

int main(void) {
  char message[100], c;
  int key, i;
  printf("Enter message to be encrypted: ");

  for (i = 0; c != '\n'; i++) {
    c = getchar();
    message[i] = c;
  }
  message[i] = '\0';

  printf("Enter shift amount: ");
  scanf("%d", &key);
  encrypt(message, key);
  printf("Encrypted message: %s ", message);
}

void encrypt(char *message, int shift) {
  for (char *p = message; *p; p++) {
    if (*p >= 'a' && *p <= 'z') {
      *p = ((*p - 'a') + shift) % 26 + 'a';
    } else if (*p >= 'A' && *p <= 'Z') {
      *p = ((*p - 'A') + shift) % 26 + 'A';
    }
  }
}
