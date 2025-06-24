#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void) {
  char first_name[20], last_name[20];

  printf("Enter a first and last name: ");
  scanf("%s %s", first_name, last_name);
  strcat(first_name, " ");
  strcat(first_name, last_name);
  reverse_name(first_name);
  printf("%s\n", first_name);
}

void reverse_name(char *name) {
  char first_name[20] = {0}, last_name[20] = {0}, *p = name;
  int i = 0;
  for (; *p != ' '; i++)
    first_name[i] = *p++;
  first_name[1] = '\0';
  p++;
  for (i = 0; *p; i++)
    last_name[i] = *p++;
  strcpy(name, "");
  strcat(name, last_name);
  strcat(name, ", ");
  strcat(name, first_name);
  strcat(name, ".");
}
