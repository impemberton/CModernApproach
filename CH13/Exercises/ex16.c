#include <stdio.h>

int count_spaces(const char s[]);

int main(void) {
    char str[100] = {0}, ch;
    printf("Enter a string: ");
    for (char *p = str; (ch = getchar()) != '\n'; p++)
        *p = ch;
    int num_of_spaces = count_spaces(str);
    printf("Number of spaces: %d\n", num_of_spaces);
}

int count_spaces(const char s[]) {
    int count = 0;

    while(*s)
        if (*s++ == ' ')
            count++;
    return count;
}
