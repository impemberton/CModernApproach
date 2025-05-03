#include <stdio.h>

int main(void) {
    char c;
    int char_count = 0, word_count = 1;
    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n'){
        if (c == ' ') 
            word_count++;
        else
            char_count++;
    }
    printf("Average word length: %.1f\n", (float) char_count / word_count);
}