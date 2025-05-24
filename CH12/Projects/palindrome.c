#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

int main(void) {
    char letters[LEN], c;
    int i;
    bool is_palindrome = true;

    printf("Enter a message: ");
    for (i = 0; (c = tolower(getchar())) != '\n' && i < LEN;)
        if (c >= 'a' && c <= 'z')
            letters[i++] = c;
    for (int j = 0; j < i; j++) {
        if (letters[j] != letters[(i - 1) - j ])
            is_palindrome = false;
    }
    if (is_palindrome) 
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}
