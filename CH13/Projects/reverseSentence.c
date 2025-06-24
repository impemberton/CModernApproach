#include <stdio.h>

int main(void) {
  char sentence[100] = {0}, words[100][20];
  char terminator, c;
  int word_index = 0, char_index = 0;

  printf("Enter a sentence: ");

  while ((c = getchar()) != '\n') {
    if (c == '.' || c == '!' || c == '?') {
      words[word_index][char_index] = '\0';
      terminator = c;
      break;
    } else if (c == ' ') {
      words[word_index][char_index] = '\0';
      word_index++;
      char_index = 0;
    } else {
      words[word_index][char_index] = c;
      char_index++;
    }
  }

  printf("Reversal of sentence: ");
  for (; word_index >= 0; word_index--)
    printf("%s ", words[word_index]);
  printf("\b%c\n", terminator);
}
