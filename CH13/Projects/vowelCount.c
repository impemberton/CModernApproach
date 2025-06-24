#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_vowel_count(const char *sentence);

int main(void) {
  char sentence[100];

  while (1) {
    printf("Enter a sentence: ");
    scanf("%s", sentence);
    printf("Your sentence contains %d vowels.\n",
           compute_vowel_count(sentence));
  }
}

int compute_vowel_count(const char *sentence) {
  int count = 0;
  char sentence_copy[100];
  strcpy(sentence_copy, sentence);
  for (char *p = sentence_copy; *p; p++) {
    switch (toupper(*p)) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
      break;

    default:
      break;
    }
  }
  return count;
}
