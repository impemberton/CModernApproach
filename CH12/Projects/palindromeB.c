#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

int main(void) {
    char letters[LEN], c, *p;
    bool is_palindrome = true;

    printf("Enter a message: ");
    for (p = letters; (c = tolower(getchar())) != '\n' && p < letters + LEN;)
        if (c >= 'a' && c <= 'z')
            *p++ = c;
    for (char *q = letters; q < p; q++) {
        if (*q != *(letters + (p - q - 1)))
            is_palindrome = false;
    }
    if (is_palindrome) 
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}
