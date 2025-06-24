#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence);

int main(void) {
  char sentence[100];
  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Average word length: %.1f\n", compute_average_word_length(sentence));
}

double compute_average_word_length(const char *sentence) {
  char sentence_copy[100];
  int word_count = 1;
  strcpy(sentence_copy, sentence);
  for (char *p = sentence_copy; *p; p++)
    if (*p == ' ')
      word_count++;
  return (double)strlen(sentence) / word_count;
}
