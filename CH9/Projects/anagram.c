#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]) {
    char c = 0;
    while (c != '\n') {
        c = tolower(getchar());
        if (isalpha(c)) {
            counts[c-'a'] += 1;
        }
    } 
}

bool equal_array(int counts1[26], int counts2[26]) {
    bool arrays_equal = true;
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) 
            arrays_equal = false;
    }
    return arrays_equal;
}

int main(void) {
    int letters1[26] = {0}, letters2[26] = {0}, c;

    printf("Enter first word: ");
    read_word(letters1);

    printf("Enter second word: ");
    read_word(letters2);

    if (equal_array(letters1, letters2)) {
        printf("The words are anagrams.\n");
    }
    else {
        printf("The words are not anagrams.\n");
    }
        
}
