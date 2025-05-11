#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    int letter_seen[26] = {0}, c;
    bool is_anagram = true;

    printf("Enter first word: ");

    while (c != '\n') {
        c = tolower(getchar());
        if (isalpha(c)) {
            letter_seen[c-'a'] += 1;
        }
    } 
    printf("Enter second word: ");
    c = 0;
    while (c != '\n') {
        c = tolower(getchar());
        if (isalpha(c)) {
            letter_seen[c-'a'] -= 1;
        }
    } 

    for (int i = 0; i < 26; i++) {
        if (letter_seen[i] != 0) 
            is_anagram = false;
    }

    if (is_anagram) {
        printf("The words are anagrams.\n");
    }
        
    else {
        printf("The words are not anagrams.\n");
    }
        
}
