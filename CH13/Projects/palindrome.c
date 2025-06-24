#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LEN 100

bool is_palindrome(const char *message);

int main(void) {
  char word[LEN];

  printf("Enter a word: ");
  scanf("%s", word);
  if (is_palindrome(word))
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");
}

bool is_palindrome(const char *message) {
  int len = strlen(message);
  for (int i = 0; i < len; i++)
    if (tolower(message[i]) != tolower(message[(len - 1) - i]))
      return false;
  return true;
}
