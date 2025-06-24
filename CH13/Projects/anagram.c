#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
  char word1[100], word2[100];
  printf("Enter first word: ");
  scanf("%s", word1);
  printf("Enter second word: ");
  scanf("%s", word2);
  if (are_anagrams(word1, word2)) {
    printf("The words are anagrams.\n");
  } else {
    printf("The words are not anagrams.\n");
  }
}

bool are_anagrams(const char *word1, const char *word2) {
  int letter_seen[26] = {0}, i;
  for (i = 0; word1[i]; i++) {
    if (isalpha(tolower(word1[i]))) {
      letter_seen[word1[i] - 'a'] += 1;
    }
  }
  for (i = 0; word2[i]; i++) {
    if (isalpha(tolower(word2[i]))) {
      letter_seen[word2[i] - 'a'] -= 1;
    }
  }
  for (i = 0; i < 26; i++) {
    if (letter_seen[i] != 0)
      return false;
  }
  return true;
}
