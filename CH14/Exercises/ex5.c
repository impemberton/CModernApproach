#include <string.h>
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
#include <stdio.h>

int main(void) {
  char s[10];
  strcpy(s, "abcd");
  int i = 0;
  putchar(TOUPPER(s[++i]));
  putchar('\n');
  strcpy(s, "0123");
  int j = 0;
  putchar(TOUPPER(s[++j]));
}
